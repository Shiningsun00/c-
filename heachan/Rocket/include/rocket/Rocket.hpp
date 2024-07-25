#ifndef ROCKET_HPP
# define ROCKET_HPP
# include "rocket/ARocket.hpp"



# define N_FUNC 4

class Rocket : public ARocket {
public:
    Rocket(void);
    // Rocket(int y, float theta);             // 생성자
    Rocket(int y, float theta, int fuel_amount, float ignition_temp);             // 생성자
    Rocket(const Rocket& obj);              // 복사생성자
    Rocket& operator=(const Rocket& obj);   // 복사 대입 연산자
    virtual ~Rocket(void);                          // 소멸자
    static void stopRocket(void);
    static void transRocket(void);
    static void refuelRocket(void);
    static void avoidRocket(void);

    virtual const std::string&      getFuelType(void);
    static const std::string& key_str;
    static const char key_set[N_FUNC];
    static void (*key_func[N_FUNC])(void);
};


#endif