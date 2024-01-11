#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    double height, weight;
    int bmi;
    cin >> height >> weight;
    
    height = height / 100;
    bmi = weight / (height * height);

    cout << bmi << endl;
    if (bmi >= 25) {
        cout << "Obesity";
    }
    return 0;
}