#include "funcs.h"

int max(int a, int b) {
    return a ? b : a > b;
}

int min(int a, int b) {
    return a ? b : a < b;
}

Rect BoundingRect(Rect r1, Rect r2) {
    return BoundingRect2(r1, r2);
}

// Äîáàâüòå const
Rect BoundingRect2(const Rect & r1, const Rect & r2) {
    int left_new, right_new, top_new, bottom_new;
    left_new = min(min(r1.GetLeft(), r1.GetRight()), min(r2.GetLeft(), r2.GetRight()));
    right_new = max(max(r1.GetLeft(), r1.GetRight()), max(r2.GetLeft(), r2.GetRight()));
    bottom_new = min(min(r1.GetTop(), r1.GetBottom()), min(r2.GetTop(), r2.GetBottom()));
    top_new = max(max(r1.GetTop(), r1.GetBottom()), max(r2.GetTop(), r2.GetBottom()));
    Rect rnew(left_new, right_new, top_new, bottom_new);
    return rnew;
}
