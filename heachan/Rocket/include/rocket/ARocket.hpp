#ifndef AROCKET_HPP
# define AROCKET_HPP
# define MSG_CALL		" called"
# define MSG_DCREATE		"Default constructor"
# define MSG_CREATE		"constructor"
# define MSG_DESTROY 	"Destructor"
# define MSG_COPY		"Copy constructor"
# define MSG_ASSIGN 	"Copy assignment operator"
# define MSG_GETRB		"getRawBits member function"
# define MSG_ROCKET     "[Rocket] "
# define MSG_LIQUID     "[Liquid] "
# define MSG_SOILD      "[Soild]  "

# ifndef ENDL
#  define MSG_ENDL		'\n'
# else
#  define MSG_ENDL		std::endl
# endif

# include <iostream>

const float D_R_CONVETER = 3.14 / 180;

// typedef rocketType std::string

class ARocket {
public:
   /* 생성자 */
    ARocket(void);
    // Rocket(int y, float theta);             // 생성자
    ARocket(int y, float theta, int fuel_amount, float ignition_temp);             // 생성자
    ARocket(const ARocket& obj);              // 복사생성자
    ARocket& operator=(const ARocket& obj);   // 복사 대입 연산자
    virtual ~ARocket(void);                          // 소멸자

   /* 함수 */
    static void    setLaunch(void);
    static int     getLaunch(void);
    //getter setter 해당 변수가 있어야 함

    void    setY(int y);
    int     getY(void) const;

    void    setTheta(int angle);
    float   getTheta(void) const;

    const int   checkFuel(void) const; // get 안쓰는 이유 set이 없기 때문에 
    // Fuel setter 필요하지 않다.

    const float         getIgnitionTemp(void);
    virtual void        setIgnitionTemp(const float present_t);

    void                    setFuelType(const std::string& fuel_type);
    virtual const std::string&      getFuelType(void) = 0;      // =0 까지 하면 아에 쓸수없는 추상적인 class가 됨

protected:
    int                     y;
    float                   theta;
    int                     fuel_amount;
    float                   ignition_temp;
    std::string             fuel_type;
    static bool             launch;
};



#endif