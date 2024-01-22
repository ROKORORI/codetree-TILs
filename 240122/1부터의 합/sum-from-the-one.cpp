#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    
    int sum = 0;

    int i = 1;
    while (1) {
        sum += i;
        if (sum >= n) {
            cout << i;
            break;
        }
        i++;
    }
    return 0;
}