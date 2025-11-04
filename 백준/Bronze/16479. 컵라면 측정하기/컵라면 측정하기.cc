#include <iostream>
#include <cmath>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double k, d1, d2;
    cin >> k >> d1 >> d2; 

    double result = pow(k ,2) - pow((d1 - d2) / 2, 2);
    cout << result;

    return 0;
}
