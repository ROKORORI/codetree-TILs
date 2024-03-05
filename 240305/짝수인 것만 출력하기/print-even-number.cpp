#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    std::cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    int new_arr[n], idx = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            new_arr[idx] = arr[i];
            idx += 1;
        }
    }

    for (int i = 0; i < idx; i++) {
        std::cout << new_arr[i];
    }
    
    return 0;
}