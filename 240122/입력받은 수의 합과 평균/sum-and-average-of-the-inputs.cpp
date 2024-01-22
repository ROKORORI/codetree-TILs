#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, sum, cnt;
    cin >> n;
    sum = 0, cnt = 0;

    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;

        sum += a;
        cnt += 1;
    }

    cout << fixed;
    cout.precision(1);

    cout << sum << " " << (double)sum / cnt;
    return 0;
}