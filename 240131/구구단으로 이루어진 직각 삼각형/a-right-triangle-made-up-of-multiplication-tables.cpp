#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    for (int i = 0; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << i + 1 << " * " << j << " = " << (i + 1) * j;
            if (j != n - i) {
                cout << " / ";
            }
            else {
                cout << endl;
            }
        }
    }
    return 0;
}