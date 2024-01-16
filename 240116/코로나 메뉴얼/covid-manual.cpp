#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string a_c, b_c, c_c;
    int a_t, b_t, c_t, cnt;

    if ((a_c == "Y") && (a_t >= 37)) {
        cnt += 1;
    }

    if ((b_c == "Y") && (b_t >= 37)) {
        cnt += 1;
    }

    if ((c_c == "Y") && (c_t >= 37)) {
        cnt += 1;
    }

    if (cnt >= 2) {
        cout << "E";
    }
    else {
        cout << "N";
    }
    
    return 0;
}