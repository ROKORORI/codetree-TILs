#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    for (int i = 0; i < n * 2 - 1; i++) {
        if (i < n) {
            for (int j = i; j >= 0; j--) {
                cout << "*";
            }
        }
        else {
            for (int j = 2 * n - (i + 1); j > 0; j--) {
                cout << "*";
            }
        }
        cout << "\n" << endl;
    }
    return 0;
}