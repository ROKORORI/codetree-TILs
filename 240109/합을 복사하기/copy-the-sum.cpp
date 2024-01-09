#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, c;
    a = 1, b = 2, c = 3;
    a = b = c = a + b + c;
    std::cout << a << " " << b << " " << c;
    return 0;
}