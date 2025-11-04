#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<vector<int>> v(n, vector<int>(m));
    for (int i = 0; i < n; i++) 
        for (int j = 0; j < m; j++) 
            cin >> v[i][j];
        
    for (int i = 0; i < n; i++) 
        sort(v[i].begin(), v[i].end());

    int tot_min = INT_MAX;
    vector<int> idx(n, 0);
    while (true) {
        int current_max = 0;
        int current_min = INT_MAX;
        int min_class_idx = -1;

        for (int i = 0; i < n; i++) {
            int val = v[i][idx[i]];
            if (val < current_min) {
                current_min = val;
                min_class_idx = i;
            }
            if (val > current_max) 
                current_max = val;
        }

        tot_min = min(tot_min, current_max - current_min);

        idx[min_class_idx]++;
        if (idx[min_class_idx] == m) 
            break;
    }

    cout << tot_min;
}


// 기존 while 내부 [(vector생성&정렬) * (while자체반복)] -> 시간복잡도 O(N^2*m*logN)