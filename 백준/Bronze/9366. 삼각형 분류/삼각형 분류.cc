#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    int idx = 1;

    while (t--) {
        vector<int> l(3);
        cin >> l[0] >> l[1] >> l[2];
        sort(l.begin(), l.end());

        cout << "Case #" << idx++ << ": ";

        if (l[2] >= (l[0] + l[1])) {
            cout << "invalid!" << endl;
        }
        else if (l[0] == l[1] && l[1] == l[2]) {
            cout << "equilateral" << endl;
        }
        else if (l[0] == l[1] || l[1] == l[2] || l[0] == l[2]) {
            cout << "isosceles" << endl;
        }
        else {
            cout << "scalene" << endl;
        }
    }

    return 0;
}
