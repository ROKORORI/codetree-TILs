#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    for (int i = 5; i < 5 + n; i++) {
        for (int j = 0; j < n; j++) {
            cout << 2 * i + 1 + 2 * j << " ";
        }
        cout << endl;
    }
    return 0;
}