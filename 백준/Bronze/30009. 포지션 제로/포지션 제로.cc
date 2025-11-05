#include <iostream>
#include <cmath>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    int x, y, r;
    cin >> x >> y >> r;

    int inner = 0;
    int limit = 0;

    while (n--) {
        int temp;
        cin >> temp;
        int dist = abs(temp - x);
        if (dist < r) {
            inner++;
        }
        else if (dist == r) {
            limit++;
        }
    }

    cout << inner << " " << limit;

    return 0;
}
