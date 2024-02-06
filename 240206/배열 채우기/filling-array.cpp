#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[10], cnt = 0;

    for (int i = 0; i < 10; i++) {
        cin >> arr[i];

        if (arr[i] == 0) {
            break;
        }
        else {
            cnt += 1;
        }
    }

    for (int i = cnt - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    return 0;
}