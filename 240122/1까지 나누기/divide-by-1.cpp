#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, cnt = 0;
    cin >> n;

    int i = 1;
    while (1) {
        n /= i;
        cnt++;
        i++;
        if (n <= 1) {
            cout << cnt;
            break;
        }
    }
    return 0;
}