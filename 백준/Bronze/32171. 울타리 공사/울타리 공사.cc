#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int min_x = 1e9, min_y = 1e9;
    int max_x = -1e9, max_y = -1e9;

    for (int i = 0; i < n; ++i) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        min_x = min(min_x, a);
        min_y = min(min_y, b);
        max_x = max(max_x, c);
        max_y = max(max_y, d);

        int perimeter = 2 * ((max_x - min_x) + (max_y - min_y));
        cout << perimeter << '\n';
    }

    return 0;
}
