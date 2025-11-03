#include <iostream>
#include <cmath>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin >> T;

    while (T--) {
        int x1, y1, r1, x2, y2, r2;
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

        int dx = x2 - x1;
        int dy = y2 - y1;
        double d = sqrt(dx * dx + dy * dy);

        if (x1 == x2 && y1 == y2 && r1 == r2) {
            cout << -1 << '\n';
        }

        else if (d == r1 + r2 || d == abs(r1 - r2)) {
            cout << 1 << '\n';
        }
        
        else if (abs(r1 - r2) < d && d < (r1 + r2)) {
            cout << 2 << '\n';
        }

        else {
            cout << 0 << '\n';
        }
    }

    return 0;
}
