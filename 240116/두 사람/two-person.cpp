#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a_y, b_y;
    string a_s, b_s;
    cin >> a_y >> a_s;
    cin >> b_y >> b_s;

    if (((a_y >= 19) && (a_s == "M")) || ((b_y >= 19) && (b_s == "M"))) {
        cout << 1;
    }
    else {
        cout << 0;
    }

    return 0;
}