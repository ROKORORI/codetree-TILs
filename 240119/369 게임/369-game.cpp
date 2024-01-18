#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0) {
            cout << 0 << " ";
        }
        else {
            int check = 1;
            string j = to_string(i);
            
            for (int k = 0; k < j.length(); k++) {
                string l = str(j[k]);
                if (l == "3") {
                    check = 0;
                }
                else if (l == "6") {
                    check = 0;
                }
                else if (l == "9") {
                    check = 0;
                }
            }

            if (check == 0) {
                cout << 0 << " ";
            }
            else {
                cout << i << " ";
            }   
        }
    }
    return 0;
}