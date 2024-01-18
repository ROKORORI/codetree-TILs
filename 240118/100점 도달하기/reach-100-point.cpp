#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    
    for (int i = n; i <= 100; i++) {
        if (i < 60) {
            cout << "F" << " ";
        }
        else if (i < 70) {
            cout << "D" << " ";
        }
        else if (i < 80) {
            cout << "C" << " ";
        }
        else if (i < 90) {
            cout << "B" << " ";
        }
        else {
            cout << "A" << " ";
        }
    }
    return 0;
}