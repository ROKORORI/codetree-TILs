#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    cin >> a >> b;

    int sum = 0;
    int cnt = 0;

    for (int i = a; a <= b; i++) {
        if ((i % 5 == 0) || (i % 7 == 0)) {
            cnt += 1;
            sum += i;
        }
    }

    cout << sum << " ";

    cout << fixed;
    cout.precision(1);
    cout << (double)(sum / cnt);
    
    return 0;
}