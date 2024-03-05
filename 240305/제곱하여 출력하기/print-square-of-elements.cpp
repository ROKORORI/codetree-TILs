#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.
    int n, arr[100];
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        std::cout << arr[i] * arr[i] << " ";
    }
    return 0;
}