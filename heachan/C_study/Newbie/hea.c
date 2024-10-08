

#include <stdio.h>

// class X

struct B {
    int x;
    int y;
    int _sum;
};


void inputValue1(struct B c, int x, int y) {
    c.x = x;
    c.y = y;
}

void inputValue2(struct B *b, int x, int y) {
    b->x = x;
    b->y = y;
}


void setSum(struct B *b) {
    b->_sum = b->x + b->y;
}

int getSum(struct B *b) {
    return b->_sum;
}

int main(void) {
    struct B b;

    struct B c;

    c.x = 10;
    c.y = 20;

    inputValue2(&b, 20, 40);


    printf("b.x = %d\n", b.x);

    // setSum(b);

    // printf("b._sum = %d\n", getSum(&b));
    return 0;
}
