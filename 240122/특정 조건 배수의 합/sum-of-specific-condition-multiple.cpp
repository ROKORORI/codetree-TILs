#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, tmp, sum = 0;
    cin >> a >> b;

    if (a >= b) {
        tmp = b;
        b = a;
        a = tmp;
    }
    
    while (a <= b) {
        if (a % 5 == 0) {
            sum += a;
        }
        a ++;
    }

    cout << sum;
    return 0;
}