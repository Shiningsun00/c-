#include "Practice_Class.hpp"

namespace cvt
{
    void converter(Rpm& instance){
        std::cout << "Reference!" << std::endl;
        instance.setRev(30);
    }

    void converter(Rpm* instance){
        std::cout << "point!" << std::endl;
        (*instance).setRev(20);
    }

    void converter(Rpm** instance){
        std::cout << "double point!" << std::endl;
        (**instance).setRev(10);
    }

} // namespace name
