#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[10], cnt = 0, sum = 0;

    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
        if ((arr[i] != 0) && (arr[i] % 2 == 0)) {
            sum += arr[i];
            cnt += 1;
        }
        else if (arr[i] == 0) {
            break;
        }
    }

    cout << cnt << " " << sum;
    return 0;
}