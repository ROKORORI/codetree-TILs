#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[100], check = 0, idx = 0;

    while (1) {
        cin >> arr[idx];

        if (arr[idx] == 0) {
            if (check == 0) {
                check = idx;
            }
            else {
                cout << arr[check - 3] + arr[check - 2] + arr[check - 1];
                break;
            }
        }
        idx += 1;
    }
    return 0;
}