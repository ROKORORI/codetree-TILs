#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    
    for (int i = 0; i < 2 * n - 1; i++) {
        if (i < n) {
            for (int j = n - i; j > 0; j--) {
                cout << "*" << " ";
            }
        }
        else {
            for (int j = i - n + 1; j >= 0; j--) {
                cout << "*" << " ";
            }
        }
        cout << endl;
    }
    return 0;
}