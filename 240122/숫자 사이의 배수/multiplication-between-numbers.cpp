#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, sum, cnt;
    cin >> a >> b;
    sum = 0, cnt = 0;

    while (a <= b) {
        if ((a % 5 == 0) || (a % 7 == 0)) {
            cnt += 1;
            sum += a;
        }

        a++;
    }

    cout << fixed;
    cout.precision(1);
    cout << sum << " " << (double)sum / cnt;
    return 0;
}