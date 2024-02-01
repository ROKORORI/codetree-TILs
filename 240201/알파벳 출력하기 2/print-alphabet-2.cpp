#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, cnt = 65;
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j < i) {
                cout << " " << " ";
            }
            else {
                cout << (char)cnt << " ";
                if ((char)cnt == 'Z') {
                    cnt = 65;
                }
                else {
                    cnt++;
                }
            }
        }
        cout << endl;
    }
    return 0;
}