#include <iostream>
#include "Circle.h"
#include "List.h"
#include <fstream>
#include "vld.h"



int main() {
    List l;
    //std::cout << CHECK_EMPTY(l) << '\n';
    l.push_back(Circle(7, 8, 9));
    l.push_back(Circle(1, 2, 3));
    l.push_back(Circle(1, 1, 1));
    l.push_back(Circle(4, 5, 6));
    l.push_back(Circle(1, 2, 3));
    l.push_back(Circle(4, 5, 6));
    l.push_front(Circle(1, 2, 3));

//    if (!l.remove(Circle(1, 2, 3)))
//        std::cout << "nothing deleted" << '\n';

//    l.removeAll(Circle(4, 5, 6));
    //l.clear();

    std::cout << l;
    //std::cout << CHECK_EMPTY(l) << '\n';
    l.sort();
    std::cout << "--------SORTED--------\n";
    std::cout << l;

    std::cout<<"Enter Output File Name  - " ;
    char ar[80];
    std::cin >> ar;
    std::ofstream fout(ar);
    fout << l << std::endl;
    fout.close();

    std::cout << "---------l2---------\n";
    List l2;
    std::cout << CHECK_EMPTY(l2) << '\n';

    std::ifstream fin(ar);
    fin >> l2;
    fin.close();

    std::cout << l2;
    std::cout << CHECK_EMPTY(l2) << '\n';
}
