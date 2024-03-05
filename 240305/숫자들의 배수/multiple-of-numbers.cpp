#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    std::cin >> n;

    int arr[100000], idx = 0, seq = 1, five_cnt = 0;
    while (1) {
        int now = n * seq;

        arr[idx] = now;

        if ((n * seq) % 5 == 0) {
            five_cnt += 1;
        }

        if (five_cnt == 2) {
            break;
        }
        
        seq += 1;
        idx += 1;
    }

    for (int i = 0; i <= idx; i++) {
        std::cout << arr[i] << " ";
    }
    return 0;
}