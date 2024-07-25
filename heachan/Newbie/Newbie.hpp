
#ifndef NEWBIE_HPP
# define NEWBIE_HPP

# include <stdio.h>

class Newbie {
public:
    /* 생성자 */
    Newbie(void);           // prototype
    Newbie(int p, int q);  // parameter

    /* 함수 */
    void    setSum(void);
    int     getSum(void);

private:
    int x; //declartion
    int y;
    int _sum;
};

#endif