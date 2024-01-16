#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int m_s, l_s;
    cin >> m_s >> l_s;

    if (m_s >= 90) {

        if (l_s < 90) {
            cout << 0;
        }
        else if (l_s < 95) {
            cout << 50000;
        }
        else {
            cout << 100000;
        }

    }

    else {
        cout << 0;
    }

    return 0;
}