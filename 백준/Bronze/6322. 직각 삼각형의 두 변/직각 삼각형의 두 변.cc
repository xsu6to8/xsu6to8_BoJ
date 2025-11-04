#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int idx = 1;

    while (true) {
        double a, b, c;
        cin >> a >> b >> c;

        if (a == 0 && b == 0 && c == 0)
            break;

        cout << "Triangle #" << idx << '\n';

        double unknown = -1.0;
        string var;

        if (a == -1) {
            if (c > b) {
                unknown = sqrt(c * c - b * b);
                var = "a";
            }
        }
        else if (b == -1) {
            if (c > a) {
                unknown = sqrt(c * c - a * a);
                var = "b";
            }
        }
        else if (c == -1) {
            unknown = sqrt(a * a + b * b);
            var = "c";
        }

        if (unknown == -1.0)
            cout << "Impossible.\n";
        else
            cout << fixed << setprecision(3) << var << " = " << unknown << '\n';

        cout << '\n';
        idx++;
    }

    return 0;
}
