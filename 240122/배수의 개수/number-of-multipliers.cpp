#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int cnt_3, cnt_5;
    cnt_3 = 0;
    cnt_5 = 0;

    for (int i = 0; i < 10; i++) {
        int a;
        cin >> a;

        if (a % 3 == 0) {
            cnt_3 += 1;
        }

        if (a % 5 == 0) {
            cnt_5 += 1;
        }
    }

    cout << cnt_3 << " " << cnt_5;
    return 0;
}