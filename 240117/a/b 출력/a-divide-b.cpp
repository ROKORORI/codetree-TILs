#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    cin >> a >> b;

    if ((a / b) > 0) {
        cout << a / b << ".";
        a %= b;
    }
    else {
        cout << "0.";
    }
    
    for (int i = 0; i < 20; i++) {
            a *= 10;
            cout << a / b;
            a %= b;
        }

    return 0;
}