#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.
    int one, two;
    std::cin >> one >> two;

    int fibo[10];
    fibo[0] = one;
    fibo[1] = two;

    for (int i = 2; i < 10; i++) {
        fibo[i] = (fibo[i - 1] + fibo[i - 2]) % 10;
    }

    for (int i = 0; i < 10; i++) {
        std::cout << fibo[i] << " ";
    }
    return 0;
}