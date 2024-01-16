#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int m;
    cin >> m;

    if ((m <= 2) || (m == 12)){
        cout << "Winter";
    }
    else if (m <= 5){
        cout << "Spring";
    }
    else if (m <= 8) {
        cout << "Summer";
    }
    else {
        cout << "Fall";
    }
    
    return 0;
}