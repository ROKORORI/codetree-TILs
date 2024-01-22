#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int sum = 0;

    int n;
    cin >> n;

    for (i = 0; i < n; i++){
        if ((i % 2 == 1) && (i % 3 == 0)){
            sum += i;
        }
    }

    cout << sum;
    return 0;
}