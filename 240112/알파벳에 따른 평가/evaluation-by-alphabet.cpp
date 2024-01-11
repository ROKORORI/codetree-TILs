#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string u;
    cin >> u;

    if (u == "S") {
        cout << "Superior";
    }

    else if (u == "A") {
        cout << "Excellent";
    }

    else if (u == "B") {
        cout << "Good";
    }

    else if (u == "C") {
        cout << "Usually";
    }

    else if (u == "D") {
        cout << "Effort";
    }

    else {
        cout << "Failure";
    }

    return 0;
}