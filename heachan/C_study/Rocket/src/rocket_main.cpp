#include "utility.hpp"
#include "utility2.hpp"
#include "rocket/LiquidFuel.hpp"
#include "rocket/SoildFuel.hpp"
#include <thread>
#include <mutex>





// void test1(void) {
//     Rocket heachan(20, 0.12); // Stack memory
//     std::cout << std::endl;
//     Rocket heachan2(20, 0.12);
//     std::cout << std::endl;
//     heachan2 = heachan;

//     std::cout << std::endl;
//     Rocket heachan3(heachan);


//     //TODO: 
//     std::cout << std::endl;
//     Rocket heachan4 = heachan;


//     // (*heachan).getLaunch()
//     // Rocket heachan2 = 


//     std::cout << heachan.getY() << ", ";
//     std::cout << heachan.getLaunch() << ", ";
//     std::cout << heachan.getTheta() << std::endl;

    
//     /* --------------- */


//     // one_ddalkak(heachan);
//     Rocket* heachan_ptr = &heachan;

//     utd1::one_ddalkak(heachan);
//     utd1::one_ddalkak(&heachan);
//     utd1::one_ddalkak(&heachan_ptr);

//     utd2::one_ddalkak(heachan);
//     utd2::one_ddalkak(&heachan);
//     utd2::one_ddalkak(&heachan_ptr);


//     /* --------------- */

//     std::cout << heachan.getY() << ", ";
//     std::cout << heachan.getLaunch() << ", ";
//     std::cout << heachan.getTheta() << std::endl;


//     heachan.setLaunch();
//     heachan.setTheta(45); // 예상 : 0.866
//     heachan.setY(4);

//     std::cout << heachan.getY() << ", ";
//     std::cout << heachan.getLaunch() << ", ";
//     std::cout << heachan.getTheta() << std::endl;

// }

static void test2(void) {
    LiquidFuel liquid_fuel;
    printValue(liquid_fuel.checkFuel());

    std::cout << std::endl;
    SolidFuel solid_fuel;
    printValue(solid_fuel.checkFuel());

    SolidFuel solid_fuel2(10, 4, 80, 250, 2);
    printValue(solid_fuel2.checkFuel());
}

static void test3(void) {
    // Rocket test_rocket();
    // Rocket test_rocket = Rocket();
    Rocket test_rocket;
    test_rocket.setIgnitionTemp(2000);
    printValue(test_rocket.getIgnitionTemp());
    printValue("\n");
    printValue("----------< Just >----------------");

    SolidFuel soli_rocket;
    soli_rocket.setIgnitionTemp(20);
    printValue(soli_rocket.getIgnitionTemp());
    printValue("\n");

    LiquidFuel liqu_rocket;
    liqu_rocket.setIgnitionTemp(20);
    printValue(liqu_rocket.getIgnitionTemp());
    printValue("\n");

    printValue("---------< 다형성 정적할당 >-------------------");

    // Rocket any_rocket = Soli_rocket(); // => 공간이 작아서 다 안들어감
    // Rocket& any_rocket = Soli_rocket(); // => stack 내가 없어서
    Rocket& any_rocket = soli_rocket;   // => 그래서 정적할당에서는 이렇게 밖에 못함 
    any_rocket.setIgnitionTemp(10);
    printValue(any_rocket.getIgnitionTemp());
    printValue("\n");

    Rocket& any_rocket2 = liqu_rocket;
    any_rocket2.setIgnitionTemp(10);
    printValue(any_rocket2.getIgnitionTemp());
    printValue("\n");

    printValue("---------< 다형성 동적할당 >-------------------");

    // 근데, 동적할당 이게 가능함
    Rocket* any_rocket_ptr = new SolidFuel();
    (*any_rocket_ptr).setIgnitionTemp(10);
    printValue((*any_rocket_ptr).getIgnitionTemp());
    printValue("\n");

    Rocket* any_rocket_ptr2 = new SolidFuel();
    any_rocket_ptr2->setIgnitionTemp(10);
    printValue(any_rocket_ptr2->getIgnitionTemp());
    printValue("\n");

    Rocket** any_rocket_double_ptr = &any_rocket_ptr;
    (**any_rocket_double_ptr).setIgnitionTemp(10);
    (*any_rocket_double_ptr)->setIgnitionTemp(10);
    printValue((*any_rocket_double_ptr)->getIgnitionTemp());

    delete any_rocket_ptr;
    delete any_rocket_ptr2;

    // system("leaks -q rocket"); // unix 계열
    //+>  flag      -fsanitize=leak 

    /*
    printValue("---------< check >-------------------");

    for (size_t i = 0; i < 2 ; ++i) {
        printValue(any_rocket[i].getIgnitionTemp());
    }
    */

}

// static void test3(void) { 
//     std::cout << "Hello" << std::endl;
// }



/**
 * 원래 redifition이 안된다.
 * 근데, 부모 자식간에는 된다.
 * 여기서 자기 클래스대로 선언하고 사용하면 괜찮지만,
 * 반복문이나 간소화를 위해서 부모클래스에 업캐스팅을 하게 되면, 
 * 자기 자신의 함수를 잃어버리고, 부모 함수를 실행하게 된다.
 * 그래서 부모 함수에 virtual 키워드를 넣어서 자식 클래스들의 함수를 찾아갈 수 있또록 하는 것이
 * "overriding" 이다.
 */


static void test4(void) {

    std::cout << "1" << std::endl;
    Rocket rocket;
    printValue(rocket.getFuelType());

    std::cout << "2" << std::endl;
    SolidFuel solid_rocket;
    printValue(solid_rocket.getFuelType());

    std::cout << "3" << std::endl;
    LiquidFuel liquid_rocket;
    printValue(liquid_rocket.getFuelType());


    // ARocket a_rocket;


}


static void printBool(const bool flag) {

    std::cout << std::boolalpha << flag << std::endl;
}

static void totalBool(const Rocket& j_rocket, const Rocket& s_rocket, const Rocket& l_rocket) {
    // virtual 함수들만 사용할 때 SolidFuel -> Rocket 가능
    // redifne가 없을 때 (static 함수들 사용할 때)
    std::cout << "each param" << std::endl;

    printBool(j_rocket.getLaunch());
    printBool(s_rocket.getLaunch());
    printBool(l_rocket.getLaunch());
    
}


static void totalBool(const Rocket rocket_set[]) {
    std::cout << "param 배열" << std::endl;
    printBool(rocket_set[0].getLaunch());
    printBool(rocket_set[1].getLaunch());
    printBool(rocket_set[2].getLaunch());
    
}


void test5(void) {

    // ARocket a_rocket; // Nope
    // ARocket& a_rocket = rocket;
    // ARocket* a_rocket = &rocket; //
    // ARocket* a_rocket2 = new Rocket();

    printBool(ARocket::getLaunch());
    std::cout << "-------\n" << std::endl;
    Rocket just_rocket;
    SolidFuel solid_fuel_rocket;
    LiquidFuel liquid_fuel_rocket;

    Rocket rocket_set[3] = {just_rocket, solid_fuel_rocket, liquid_fuel_rocket};
    // ARocket& arocket_set[3];
    // arocket_set = rocket_set;

    totalBool(just_rocket, solid_fuel_rocket, liquid_fuel_rocket);
    ARocket::setLaunch();
    // solid_fuel_rocket.setLaunch();
    totalBool(rocket_set);

}


void test6(void) {


    char c = std::getchar();

    // if (c == 'r') {
    //     Rocket::refuelRocket();
    // } else if (c == 't') {
    //     Rocket::transRocket();
    // } else if (c == 'a') {
    //     Rocket::avoidRocket();
    // } else if (c == 's') {
    //     Rocket::stopRocket();
    // } else {
    //     std::cerr << "Not register" << std::endl;
    // }

    // switch (c) {
    //     case 'r':
    //         Rocket::refuelRocket();
    //         break;
    //     case 't':
    //         Rocket::transRocket();
    //         break;
    //     case 'a':
    //         Rocket::avoidRocket();
    //         break;
    //     case 's':
    //         Rocket::stopRocket();
    //         break;
    //     default:
    //         std::cerr << "Not register" << std::endl;
    // }


    // int i = 0;
    // for (; i < N_FUNC ; ++i) { 
    //     if (Rocket::key_set[i] == c) {
    //         break ;
    //     }
    // }
    // if (i >= N_FUNC) {
    //     std::cerr << "Not register" << std::endl;
    //     return ;
    // }
    // Rocket::key_func[i]();


    // int i = 0;
    // for (; i < N_FUNC && Rocket::key_set[i] != c; ++i) { }
    // if (i >= N_FUNC) {
    //     std::cerr << "Not register" << std::endl;
    //     return ;
    // }
    // std::cout << i << std::endl;
    // Rocket::key_func[i]();
    

    int i = Rocket::key_str.find(c);
    if (i == std::string::npos) {
        return ;
    }
    Rocket::key_func[i]();




}


#include <stdio.h>
#include <functional>

static void test7(void) {
    Rocket r;
    Rocket a;

    a.setTheta(3.14);
    printValue(r.getTheta());

    // std::function<float(void)> func = std::bind(&Rocket::getTheta, &a);
    // printf("&bind : %p", &std::bind(&Rocket::getTheta, &a)); => 당연히 안됨

    // printf(" getTheta : %p\n", r.getTheta);
    // printf("&getTheta : %p\n", &Rocket::getTheta);
    // printf(" func    : %p\n", func);
    // printf("&func    : %p\n", &func);
    // printValue(func());

}

    
int count       = 0;
std::mutex      mtx;

static void processInput(void){
    for (int i = 0; i < 10; ++i) {
        mtx.lock();
        std::cout << count++ << std::endl;
        mtx.unlock();
    }
}

static void test_thread(void) {
    std::thread     input_thread[3];
    for (int i = 0; i < 3; ++i) {
        input_thread[i] = std::thread([]() { processInput(); });
    }



    for (int i = 0; i < 3; ++i) {
        if (input_thread[i].joinable()) {
            input_thread[i].join();
        }
    }
}


#include <vector>
#include <algorithm>

namespace hea {
    size_t distance(const std::vector<int>::const_iterator first, const std::vector<int>::const_iterator last) {
        return last - first;
    }
}


static void test8(void) {
    std::vector<int> vec; // <int> : generic


    vec.push_back(3); // 0
    vec.push_back(5); // 1
    vec.push_back(1); // 2
    vec.push_back(8); // 3
    vec.push_back(9); // 4



    std::cout << vec.front() << std::endl;
    std::cout << vec.back() << std::endl;

    const std::vector<int>::const_iterator bit = vec.begin();
    const std::vector<int>::const_iterator eit = vec.end();

    std::cout << *bit << std::endl;
    std::cout << *eit<< std::endl;
    // [1, 2, 3, 4]

    int find_num = 1;
    std::vector<int>::const_iterator it = vec.begin();
    for(; it != vec.end(); ++it) {
        std::cout << *it << std::endl;
        if (*it == find_num) {
            break ;
        }
    } // interator 값 주소는 const못함

    // std::cout << "distance : " << std::distance(vec.begin(), it) << std::endl;
    std::cout << "distance index : " << hea::distance(bit, it)  << std::endl;


    
    // int a = 3;
    // const int* ptr = &a;            // int 
    // int const* ptr2 = &a;           // int*
    // const int* const ptr3 = &a;     // int int*
    // const int* const ptr3 = &a;     // int int*

    // ++ptr;
    // ++ptr2; // ERROR
    // ++ptr3; // ERROR

    // *ptr = 4;// ERROR
    // *ptr2 = 4;
    // *ptr3 = 4;// ERROR
    
    
    

  
    const std::vector<int>::const_iterator find_it = std::find(vec.begin(), vec.end(), find_num);

    // find_it = vec.begin();
    if (find_it == vec.end()) {
        std::cout << "NOT Found" << std::endl;
    } else {
        std::cout << "find index     : " << hea::distance(vec.begin(), find_it) << std::endl;

        std::cout << "find it : " << *find_it << std::endl;

    }
}
//standard template library

int main(void) {
    int a;
    a = 0;
    // shadow
    {   

        int b;
        b = 3;
        printValue(a);

    }

    printValue(a);
    {
        Rocket c;
        printValue(c.getFuelType());
    }
    printValue("Done");
    // test1();
    // test2();
    // test3();
    // test4();
    // test5();
    // test6();
    // test7();
    // test8();
    
    return 0;
}
    // int num = 30;

    // int* num_ptr = &num;

    // int& num_ref = num;
    // int& angle = num;

    // num_ref = 50;
    // angle = 1;
    // num = 30;

    // std::cout << num_ref << std::endl;
    // std::cout << num << std::endl;