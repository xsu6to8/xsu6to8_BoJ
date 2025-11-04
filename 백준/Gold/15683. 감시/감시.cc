#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;
int N, M;
int board[8][8];
int answer = INF;

struct CCTV {
    int y, x, type;
};
vector<CCTV> cctvs;

// 0:→, 1:↑, 2:←, 3:↓
int dy[4] = { 0, -1, 0, 1 };
int dx[4] = { 1,  0,-1, 0 };

vector<vector<vector<int>>> dir = {
    {{0},{1},{2},{3}},                  // 1
    {{0,2},{1,3}},                      // 2
    {{1,0},{0,3},{3,2},{2,1}},          // 3 
    {{1,0,2},{0,3,1},{3,2,0},{2,1,3}},  // 4 
    {{0,1,2,3}}                         // 5 
};

void watch(vector<vector<int>>& tmp, int y, int x, int d) {
    int ny = y + dy[d], nx = x + dx[d];
    while (0 <= ny && ny < N && 0 <= nx && nx < M && tmp[ny][nx] != 6) {
        if (tmp[ny][nx] == 0) 
            tmp[ny][nx] = -1;  
        ny += dy[d];
        nx += dx[d];
    }
}

void dfs(int idx, vector<vector<int>> cur) {
    if (idx == cctvs.size()) {
        int blind = 0;
        for (int i = 0; i < N; ++i)
            for (int j = 0; j < M; ++j)
                if (cur[i][j] == 0) ++blind;
        answer = min(answer, blind);
        return;
    }

    auto [y, x, type] = cctvs[idx];
    for (auto& comb : dir[type - 1]) {
        vector<vector<int>> nxt = cur;          
        for (int d : comb) 
            watch(nxt, y, x, d); 
        dfs(idx + 1, nxt);                     
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N >> M;
    for (int i = 0; i < N; ++i)
        for (int j = 0; j < M; ++j) {
            cin >> board[i][j];
            if (1 <= board[i][j] && board[i][j] <= 5)
                cctvs.push_back({ i, j, board[i][j] });
        }

    vector<vector<int>> init(N, vector<int>(M));
    for (int i = 0; i < N; ++i)
        for (int j = 0; j < M; ++j)
            init[i][j] = board[i][j];

    dfs(0, init);
    cout << answer;
}
