#include <array>
#include <stdio.h>
#include <iostream>



static std::array<float, 3> _global_position = {-1, -1, -12};

bool tureFunction(void)  { 
     if (_global_position[0] == -1.0f || _global_position[1] == -1.0f || _global_position[2] == -1.0f ) 
     { return false; };

    return true;
}
bool tureFunction2(void)  { 
    for(size_t i = 0; i<_global_position[3]; ++i){
     if (_global_position[i] != -1.0f) { 
        return true; 
      }
        return false;
    }
}

int main(void){
    std::cout << tureFunction() <<std::endl;
    std::cout << tureFunction2() <<std::endl;


    return 0;
}