#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

long long tiles[81];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long n;
    cin >> n;

    tiles[1] = 1;
    tiles[2] = 1;

    for (int i = 3; i <= n; i++)
        tiles[i] = tiles[i - 1] + tiles[i - 2];

    cout << 2 * (2 * tiles[n] + tiles[n - 1]);

    return 0;
}
