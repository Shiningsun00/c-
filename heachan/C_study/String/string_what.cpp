
#include <iostream>

// using namespace std;
// using namespace utd;

namespace my {
    int strlen_array(const char s[]) {
        unsigned int i = 0; // int max 2147483647 * 2 = uint max
        while(s[i])  {
            ++i;
        }
        return i;
    }

    int strlen(const char* s) {
        const char*     e = s;
        while(*e) {
            // std::cout << *e << std::endl;
            ++e;
            // e += 1;
        }
        return (int)(e - s);
    }

    // int nums_len(void) {

    // }
}

int main(void) {

    char    s0[]        = "jsl"; // 1byte * 13 +\0 => array

//                        [             ]
    char    s1[]        = "Hello World 3"; // 1byte * 13 +\0 => array
//                     s: v
//                     e:              v
    char*   s2   = "Hello World 3"; // pointer 8bytes


    std::cout << s2[3] << std::endl; // read 가능

    // s1[0] = 'a';
    // s2[0] = 'a'; // write 가능


    /* 납득할 만한 케이스 arr -> arr / ptr -> ptr */

    std::cout << "ptr > s1 len : " << my::strlen_array(s1) << std::endl;
    std::cout << "arr > s2 len : " << my::strlen(s2) << std::endl;


    /* 서로 반대?*/

    std::cout << (s1[0] == *(s1 + 0)) << std::endl;
    char* ptr1 = s1;
    // char ptr2[] = s2;

    std::cout << "ptr > s1 len : " << my::strlen(s1) << std::endl;
    std::cout << "arr > s2 len : " << my::strlen_array(s2) << std::endl;


    std::cout << "check [0] " << std::boolalpha << (s1[0] == *(s1 + 0)) << std::endl;
    std::cout << "check [1] " << std::boolalpha << (s1[1] == *(s1 + 1)) << std::endl;
    std::cout << "check [1] " << std::boolalpha << (s1 == ptr1) << std::endl;

    // char *dl = ++s1;
    // std::cout << << std::endl;

    std::string         str1("Hello World");

    std::cout << "str1 : " << str1 << std::endl;
    std::cout << "str1 : " << str1.c_str() << std::endl;
    std::cout << "str1 len : " << my::strlen(str1.c_str()) << std::endl;
    std::cout << "str1 len : " << my::strlen_array(str1.c_str()) << std::endl;
    std::cout << "str1 len : " << str1.length() << std::endl;
    std::cout << "str1 len : " << str1.size() << std::endl;
    //"Hell" 5 = 4 + 1;     size = length + 1


    /* 이거는 나중에 합시다. */


    int     n1[] = {3, 4, 6, 10}; // 4bytes * 4a = 16
    int*    n2   = n1;



    std::cout << s1 << std::endl;
    std::cout << s2 << std::endl;

    std::cout << n1 << std::endl;
    std::cout << n2 << std::endl;


    std::cout << "s1 size: " << sizeof(s1) << std::endl;
    std::cout << "s2 size: " << sizeof(s2) << std::endl;

    std::cout << "n1 size: " << sizeof(n1) << std::endl;
    std::cout << "n2 size: " << sizeof(n2) << std::endl;

}