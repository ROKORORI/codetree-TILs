#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int start, end, out = 0;
    cin >> start >> end;

    for (int i = start; i <= end; i++) {
        int yak = 0;
        for (int j = 1; j <= i; j++) {
            if (i % j == 0) {
                yak += 1;
            }
        }
        if (yak == 3) {
            out += 1;
        }
    }
    cout << out;
    return 0;
}