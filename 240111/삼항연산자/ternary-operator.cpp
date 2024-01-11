#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int score;
    string out;
    
    cin >> score;
    out = (score == 100) ? "pass" : "failure";

    cout << out;
    return 0;
}