
#include "Newbie.hpp"

Newbie::Newbie(void) {
    x = 10;
    y = 20;
}

Newbie::Newbie(int p, int q) {
    x = p;
    y = q;
}

void Newbie::setSum(void) {
    _sum = x + y;
}

int Newbie::getSum(void) {
    return _sum;
}

//  Definition