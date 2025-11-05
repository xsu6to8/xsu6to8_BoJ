#include <iostream>
#include <cmath>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double x1, y1, r1, x2, y2, r2;
    cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

    double dis_dot = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
    double dis_r = r1 + r2;

    if (dis_dot < dis_r)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
