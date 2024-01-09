#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int a;
    double b, c;
    a = 13;
    b = 0.165000;
    c = a * b;

    cout << fixed;
    
    cout.precision(6);
    cout << a << " * " << b << " = " << c;

    return 0;
}