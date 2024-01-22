#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, prod = 1;
    cin >> a >> b;

    while (a <= b) {
        prod *= a;
        a++;
    }
    cout << prod;
    return 0;
}