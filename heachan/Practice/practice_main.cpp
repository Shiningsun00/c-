#include "Practice_Class.hpp"
#include "Practice_Utility.hpp"

int main() {
    Rpm Motors = Rpm(0);
    cvt::converter(Motors);
    std::cout << Motors.getRev() << std::endl;

    cvt::converter(&Motors);
    std::cout << Motors.getRev() << std::endl;

    Rpm* Motors_Ptr = &Motors;
    cvt::converter(&Motors_Ptr);
    std::cout << Motors.getRev() << std::endl;

    
    Rpm Motors2 = Rpm();
    //  cvt::converter(Motors2);
    std::cout << Motors2.getRev() << std::endl;

    cvt::converter(&Motors2);
    std::cout << Motors2.getRev() << std::endl;

    Rpm* Motors_Ptr2 = &Motors2;
    cvt::converter(&Motors_Ptr2);
    std::cout << Motors2.getRev() << std::endl;
    return 0;
}