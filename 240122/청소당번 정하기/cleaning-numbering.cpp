#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int c, h, r, d;
    c = 0, h = 0, r = 0;

    cin >> d;

    for (int i = 1; i < d; i++) {
        if (i % 12 == 0) {
            r += 1;
        }
        else if (i % 3 == 0) {
            h += 1;
        }
        else if (i % 2 == 0) {
            c += 1;
        }
    }

    cout << c << " " << h << " " << r;

    return 0;
}