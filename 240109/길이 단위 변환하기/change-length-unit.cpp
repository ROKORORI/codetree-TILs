#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    double ft, mi;
    double a, b;
    
    ft = 30.48, mi = 160934;
    a = 9.2, b = 1.3;
    
    cout << fixed;
    
    cout.precision(1);
    cout << a << "ft = " << a * ft << "cm" << "\n";
    
    cout.precision(1);
    cout << b << "mi = " << b * mi << "cm";
    
    return 0;
}