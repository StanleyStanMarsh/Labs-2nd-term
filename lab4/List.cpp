#include "List.h"

List::List() {
    Head.pNext = &Tail;
    Tail.pPrev = &Head;
    m_size = 0;
}

void List::push_front(const Circle &crcl) {
    new Node(&Head, crcl);
    m_size++;
}

void List::push_back(const Circle &crcl) {
    new Node(Tail.pPrev, crcl);
    m_size++;
}

List::Node& List::getByIndex(size_t index) {
    Node *current = &Head;
    size_t end = index;
    if (index > m_size)
        end = m_size - 1;
    for (size_t i = 0; i <= end; i++) {
        if (current->pNext != nullptr) {
            current = current->pNext;
        }
        else
            break;
    }
    return *current;
}

Circle& List::operator[](size_t index) {
    return this->getByIndex(index).m_Data;
}

List::~List() {
    Node *node = Head.pNext;
    for (int i = 0; i < m_size; i++) {
        Node *tmp = node->pNext;
        delete node;
        node = tmp;
    }
}

bool List::remove(const Circle &crcl) {
    if (this->isEmpty()) return false;
    Node *node = Head.pNext;
    for (int i = 0; i < m_size; i++) {
        Node *tmp = node->pNext;
        if (node->m_Data == crcl) {
            delete node;
            m_size--;
            return true;
        }
        node = tmp;
    }
    return false;
}

int List::removeAll(const Circle &crcl) {
    // неоптимизированный метод
    /*int counter = 0;
    while (this->remove(crc)) {
        counter++;
    }
    return counter;*/
    if (this->isEmpty()) return 0;
    Node *node = Head.pNext;
    size_t end = m_size;
    int counter = 0;
    for (int i = 0; i < end; i++) {
        Node *tmp = node->pNext;
        if (node->m_Data == crcl) {
            delete node;
            m_size--;
            counter++;
        }
        node = tmp;
    }
    return counter;
}

void List::clear() {
    if (this->isEmpty()) return;
    Node *node = Head.pNext;
    for (int i = 0; i < m_size; i++) {
        Node *tmp = node->pNext;
        delete node;
        node = tmp;
    }
    m_size = 0;
}

bool List::isEmpty() const {
    assert(m_size != 0 || this->Head.pNext == &this->Tail && this->Tail.pPrev == &this->Head);
    return m_size == 0;
}

void List::swap(Node * node1, Node * node2) {
    Node *temp;

    if (node2->pNext == node1) {
        temp = node1;
        node1 = node2;
        node2 = temp;
    }

    Node* A_prev = node1->pPrev;
    Node* B_prev = node2->pPrev;
    Node* A_next = node1->pNext;
    Node* B_next = node2->pNext;

    // проверка что они соседние
    if (( node1->pNext == node2 && node2->pPrev == node1 ) || ( node1->pPrev == node2 && node2->pNext == node1 )) {
        node1->pPrev = A_next;
        node2->pPrev = A_prev;
        node1->pNext = B_next;
        node2->pNext = B_prev;
    } else {
        node1->pPrev = B_prev;
        node2->pPrev = A_prev;
        node1->pNext = B_next;
        node2->pNext = A_next;
    }


    node1->pPrev->pNext = node1;
    node1->pNext->pPrev = node1;

    node2->pPrev->pNext = node2;
    node2->pNext->pPrev = node2;
}

void List::swap(size_t index1, size_t index2) {
    if (this->isEmpty()) return;
    Node* A = &this->getByIndex(index1);
    Node* B = &this->getByIndex(index2);
    this->swap(A, B);
}

void List::sort() {
    if (this->isEmpty()) return;

    for (size_t i = 0; i < m_size - 1; i++) {
        Node *current2 = Head.pNext;
        for (size_t j = 0; j < m_size - 1; j++) {
            if (current2->getCircle().getRad() > current2->pNext->getCircle().getRad()) {
                swap(current2, current2->pNext);
            }
            else
                current2 = current2->pNext;
        }
    }
}

std::ostream &operator<<(std::ostream &out, List &list) {
    for (List::Node * n = list.Head.pNext; n != &list.Tail; n = n->pNext)
        out << n->getCircle() << '\n';
    return out;
}

std::istream &operator>>(std::istream &in, List &list) {
    int x, y, r;
    while (!in.eof()) {
        in.ignore(3);
        in >> x;
        in.ignore(4);
        in >> y;
        in.ignore(4);
        in >> r;
        in.ignore();
        list.push_back(Circle(x, y, r));
    }
    return in;
}