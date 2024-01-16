#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, c;
    cin >> a >> b >> c;

    if ((a > b) && (a > c)) {
        cout << a;
    }
    else if ((b > a) && (b > c)) {
        cout << b;
    }
    else if ((c > a) && (c > b)) {
        cout << c;
    }
    // 적어도 하나는 같다.
    else {
        if ((a == b) && (a == c)) {
            cout << a;
        }
        else {
            if (a == b) {
                if (a > c) {
                    cout << a;
                }
                else {
                    cout << c;
                }
            }
            else {
                if (a > b) {
                    cout << a;
                }
                else {
                    cout << b;
                }
            }
        }
    }

    return 0;
}