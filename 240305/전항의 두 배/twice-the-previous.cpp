#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.
    int one, two, arr[10];
    std::cin >> one >> two;
    arr[0] = one;
    arr[1] = two;

    for (int i = 2; i < 10; i++) {
        arr[i] = 2 * arr[i - 2] + arr[i - 1];
    }

    for (int i = 0; i < 10; i++) {
        std::cout << arr[i] << " ";
    }
    return 0;
}