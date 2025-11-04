#include <bits/stdc++.h>
using namespace std;

int a[10][10];
vector<pair<int, int>> empt;

bool isPossible(int x, int y, int val) {
    // 행, 열 확인
    for (int i = 0; i < 9; i++)
        if (a[x][i] == val || a[i][y] == val)
            return false;

    // 3x3 박스 확인
    int sx = (x / 3) * 3, sy = (y / 3) * 3;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (a[sx + i][sy + j] == val)
                return false;
    return true;
}

bool dfs(int idx) {
    if (idx == empt.size())
        return true; 

    int x = empt[idx].first;
    int y = empt[idx].second;

    for (int val = 1; val <= 9; val++) {
        if (isPossible(x, y, val)) {
            a[x][y] = val;
            if (dfs(idx + 1)) 
                return true;
            a[x][y] = 0;
        }
    }
    return false; 
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    for (int i = 0; i < 9; i++)
        for (int j = 0; j < 9; j++) {
            cin >> a[i][j];
            if (a[i][j] == 0) empt.push_back({ i,j });
        }
    dfs(0);
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++)
            cout << a[i][j] << ' ';
        cout << '\n';
    }
}
