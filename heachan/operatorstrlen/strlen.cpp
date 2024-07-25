#include <iostream>


size_t my_strlen(const char* const str) {
    size_t i = 0;
    while (str && str[i++] != '\0');
    return --i;
}

int main(void) {
    char str[] = "Hell World"; //pakage
    // const char* str = NULL;

    std::cout << my_strlen(str) <<std::endl;
}

// 여러 방식으로 만들어 보기