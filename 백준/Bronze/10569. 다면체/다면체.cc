#include <iostream>
#include <cmath>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int v, e;
        cin >> v >> e;
        cout << 2 + e - v << endl;
    }

    return 0;
}
