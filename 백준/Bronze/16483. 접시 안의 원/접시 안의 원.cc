#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double T;
    cin >> T;

    double result = pow(T / 2.0, 2);  
    double rounded = round(result);  // 소수점 첫째 자리에서 반올림
    cout << static_cast<int>(rounded);  

    return 0;
}
