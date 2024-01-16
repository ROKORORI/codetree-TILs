#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int s, y;
    cin >> s >> y;

    if (s == 0) {
        if (y >= 19) {
            cout << "MAN";
        }
        else {
            cout << "BOY";
        }
    }

    else {
        if (y >= 19) {
            cout << "WOMAN";
        }
        else {
            cout << "GIRL";
        }
    }

    return 0;
}