
#include <iostream>
typedef struct s_Waypoint {
    int north;
    int east;
    int up;
} t_Waypoint;


struct Waypoint {
    int north;
    int east;
    int up;
};


int main(void) {
    // struct Waypoint way;    // C
    // t_Waypoint way;         // C

    Waypoint way; // C++

    way.north = 30;
    way.east = 20;
    way.up = 300;


    Waypoint way2 = {30, 20, 300};

    std::cout << way.north << ", " << way.east << ", " << way.up << std::endl;
    std::cout << way2.north << ", " << way2.east << ", " << way2.up << std::endl;
}