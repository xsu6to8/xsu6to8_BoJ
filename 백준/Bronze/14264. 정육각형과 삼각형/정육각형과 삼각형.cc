#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double L;
    cin >> L;

    double result = (sqrt(3) / 4) * L * L;
    cout << setprecision(16) << result << '\n';

    return 0;
}
