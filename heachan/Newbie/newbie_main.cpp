
#include "Newbie.hpp"

int main(void) {
    printf("Hello, World!\n");

    int n = 10;

    printf("n = %d\n", n);
    

    // Newbie minsu;
    Newbie minsu = Newbie(20, 40);  //argument ex 20, 40

    minsu.setSum();
    
    printf("minsu.num = %d\n", minsu.getSum());

    return 0;
}

// struct B {
//     int x;
//     int y;
// };

    // B b;

    // b.x = 20;
    // b.y = 10;

    // b.setSum();

    // printf("b.num = %d\n", b.getSum());


    // Newbie minsu = Newbie();