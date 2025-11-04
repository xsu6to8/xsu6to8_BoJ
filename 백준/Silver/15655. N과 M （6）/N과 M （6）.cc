#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<int> arr;
vector<int> result;

void dfs(int start, int depth) {
    if (depth == m) {
        for (int num : result)
            cout << num << ' ';
        cout << '\n';
        return;
    }

    for (int i = start; i < n; ++i) {
        result.push_back(arr[i]);
        dfs(i + 1, depth + 1); 
        result.pop_back();
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;
    arr.resize(n);
    for (int i = 0; i < n; i++) 
        cin >> arr[i];
    sort(arr.begin(), arr.end());

    dfs(0, 0);
}
