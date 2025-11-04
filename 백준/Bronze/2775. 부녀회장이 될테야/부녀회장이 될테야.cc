#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    vector<vector<int>> apt(15, vector<int>(15, 0));
    for (int i = 1; i < 15; i++)
        apt[0][i] = i;

    for (int i = 1; i < 15; i++) {
        for (int j = 1; j < 15; j++) {
            apt[i][j] = apt[i][j - 1] + apt[i - 1][j];
        }
    }

    while (t--) {
        int k, n;
        cin >> k >> n;
        cout << apt[k][n] << '\n';
    }

    return 0;
}
