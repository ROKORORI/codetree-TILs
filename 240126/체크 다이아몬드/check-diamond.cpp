#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 2 * n - 1; j++) {
            if ((j < n - (i + 1)) || (j > n + (i - 1))) {
                cout << " ";
            }
            else {
                if (i % 2 == 0) {
                    if (n % 2 == 0) {
                        if (j % 2 == 0) {
                            cout << " ";
                        }
                        else {
                            cout << "*";
                        }
                    }
                    else {
                        if (j % 2 == 0) {
                            cout << "*";
                        }
                        else {
                            cout << " ";
                        }
                    }
                }
                else {
                    if (n % 2 == 0) {
                        if (j % 2 == 0) {
                            cout << "*";
                        }
                        else {
                            cout << " ";
                        }
                    }
                    else {
                        if (j % 2 == 0) {
                            cout << " ";
                        }
                        else {
                            cout << "*";
                        }
                    }
                }
            }
        }
        cout << endl;
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < 2 * n - 1; j++) {
            if ((j < i + 1) || (j > 2 * n - (i + 3))) {
                cout << " ";
            }
            else {
                if (i % 2 == 0) {
                    if (n % 2 == 0) {
                        if (j % 2 == 0) {
                            cout << " ";
                        }
                        else {
                            cout << "*";
                        }
                    }
                    else {
                        if (j % 2 == 0) {
                            cout << " ";
                        }
                        else {
                            cout << "*";
                        }
                    }
                }
                else {
                    if (n % 2 == 0) {
                        if (j % 2 == 0) {
                            cout << "*";
                        }
                        else {
                            cout << " ";
                        }
                    }
                    else {
                        if (j % 2 == 0) {
                            cout << "*";
                        }
                        else {
                            cout << " ";
                        }
                    }
                }
            }
        }
        cout << endl;
    }
    return 0;
}