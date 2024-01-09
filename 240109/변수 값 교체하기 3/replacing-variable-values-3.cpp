#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, tmp;
    a = 3, b = 5;
    tmp = b;
    b = a, a = tmp;
    std::cout << a << std::endl << b;
    return 0;
}