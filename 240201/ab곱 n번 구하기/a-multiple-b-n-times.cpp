#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        int a, b, gop = 1;
        cin >> a >> b;

        for (int j = a; j <= b; j++) {
            gop *= j;
        }
        cout << gop << endl;
    }
    return 0;
}