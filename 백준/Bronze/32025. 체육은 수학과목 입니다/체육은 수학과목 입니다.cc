#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double h, w;
    cin >> h >> w;

    double m = min(h, w);

    cout << m / 2 * 100;

    return 0;
}
