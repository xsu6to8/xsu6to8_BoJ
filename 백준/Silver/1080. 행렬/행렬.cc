#include <iostream>
#include <vector>
#include <string>

using namespace std;

void flip(vector<vector<int>>& A, int x, int y) {
    for (int i = x; i < x + 3; i++) {
        for (int j = y; j < y + 3; j++) {
            A[i][j] = 1 - A[i][j];
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    cin >> n >> m;

    vector <vector<int>> A_arr(n, vector<int>(m));
    vector <vector<int>> B_arr(n, vector<int>(m));

    // A_arr
    for (int i = 0; i < n; i++) {
        string row;
        cin >> row;
        for (int j = 0; j < m; j++)
            A_arr[i][j] = row[j] - '0';
    }
    // B_arr
    for (int i = 0; i < n; i++) {
        string row;
        cin >> row;
        for (int j = 0; j < m; j++)
            B_arr[i][j] = row[j] - '0';
    }

    if (n < 3 || m < 3) {
        cout << (A_arr == B_arr ? 0 : -1);
        return 0;
    }

    int cnt = 0;
    for (int i = 0; i <= n - 3; i++) {
        for (int j = 0; j <= m - 3; j++) {
            if (A_arr[i][j] != B_arr[i][j]) {
                flip(A_arr, i, j);
                cnt++;
            }
        }
    }

    if (A_arr == B_arr) 
        cout << cnt;
    else 
        cout << -1;

    return 0;
}