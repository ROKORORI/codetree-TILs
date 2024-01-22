#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int sum, cnt;
    sum = 0, cnt = 0;

    for (int i = 0; i < 10; i++) {
        int a;
        cin >> a;

        if ((a >= 0) && (a <= 200)) {
            cnt += 1;
            sum += a;
        }
    }

    cout << fixed;
    cout.precision(1);
    cout << sum << " " << (double)sum / cnt;
    return 0;
}