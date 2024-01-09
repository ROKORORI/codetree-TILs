#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, c;
    int tmp_1, tmp_2;
    a = 5, b = 6, c = 7;
    tmp_1 = b, tmp_2 = c;
    b = a, a = tmp_2, c = tmp_1;
    std::cout << a << std::endl << b << std::endl << c;
    return 0;
}