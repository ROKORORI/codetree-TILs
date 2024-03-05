#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.
    int n, arr[100000];
    std::cin >> n;
    arr[0] = 1;
    arr[1] = n;

    int idx = 2;
    while (1) {
        arr[idx] = arr[idx - 2] + arr[idx - 1];
        if (arr[idx] > 100) {
            break;
        }
        else {
            idx += 1;
        }
    }

    for (int i = 0; i <= idx; i++) {
        std::cout << arr[i] << " ";
    }

    return 0;
}