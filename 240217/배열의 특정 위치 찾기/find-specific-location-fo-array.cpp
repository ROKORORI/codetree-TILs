#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[10];
    
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }

    int even_sum = 0, third_sum = 0;

    for (int i = 0; i < 10; i++) {
        if ((i + 1) % 2 == 0) {
            even_sum += arr[i];
        }

        if ((i + 1) % 3 == 0) {
            third_sum += arr[i];
        }
    }

    cout << fixed;
    cout.precision(1);
    cout << even_sum << " " << (double)third_sum / 3;

    return 0;
}