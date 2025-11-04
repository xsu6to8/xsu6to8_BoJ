#include <iostream>

using namespace std;

int main() {
    int d1, d2;
    cin >> d1 >> d2;

    const double PI = 3.141592;
    double result = 2 * d1 + 2 * PI * d2;

    cout.precision(6);
    cout << fixed << result << endl;

    return 0;
}
