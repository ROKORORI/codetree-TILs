#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    for (int i = 0; i < 2 * n - 1; i++) {
        if (i < n) {
            for (int j = 0; j < 2 * n - 1; j++) {
                if ((j < i) || (j >= 2 * n - (i + 1))) {
                    cout << " " << " ";
                }
                else {
                    cout << "*" << " ";
                }
            }
        }
        else {
            for (int j = 0; j < 2 * n - 1; j++) {
                if ((j < 2 * n - (2 + i)) || (j > i)) {
                    cout << " " << " ";
                }
                else {
                    cout << "*" << " ";
                }
            }

        }
        cout << endl;
    }
    return 0;
}