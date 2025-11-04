#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double r;
    cin >> r;

    const double PI = 3.141592653589793;

    cout << fixed << setprecision(6);
    cout << PI * r * r << '\n';      // 유클리드 기하학 원 넓이
    cout << 2 * r * r << '\n';       // 택시 기하학 원 넓이

    return 0;
}
