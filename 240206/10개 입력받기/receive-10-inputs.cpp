#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[10], cnt = 0, sum = 0;

    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
        if (arr[i] != 0) {
            cnt += 1;
            sum += arr[i];
        }
        else {
            break;
        }
    }
    cout << fixed;
    cout.precision(1);
    cout << sum << " " << (double)sum / cnt;
    return 0;
}