#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[100], idx = 0;

    for (int i = 0; i < 100; i++) {
        std::cin >> arr[idx];
        if (arr[idx] != 0) {
            if (arr[idx] % 2 == 0) {
                arr[idx] = arr[idx] / 2;
            }
            else {
                arr[idx] = arr[idx] + 3;
            }
            idx += 1;
        }
    }
    
    for (int i = 0; i < idx; i++) {
        std::cout << arr[i] << " ";
    }

    return 0;
}