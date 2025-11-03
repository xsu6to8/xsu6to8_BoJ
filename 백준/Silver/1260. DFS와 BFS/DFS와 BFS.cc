#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <algorithm>

using namespace std;

void dfs(int v, vector<vector<int>>& arr, vector<bool>& visited) {
    stack<int> st;
    st.push(v);
    
    while (!st.empty()) {
        int cur = st.top();
        st.pop();
        
        if (visited[cur]) continue;
        visited[cur] = true;
        cout << cur + 1 << " ";
        
        for (int i = arr[cur].size() - 1; i >= 0; i--) {  
            int next = arr[cur][i];
            if (!visited[next]) {
                st.push(next);
            }
        }
    }
}

void bfs(int v, vector<vector<int>>& arr, vector<bool>& visited) {
    queue<int> q;
    q.push(v);
    visited[v] = true;
    
    while (!q.empty()) {
        int cur = q.front();
        q.pop();
        cout << cur + 1 << " ";
        
        for (int next : arr[cur]) {
            if (!visited[next]) {
                visited[next] = true;
                q.push(next);
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m, v;
    cin >> n >> m >> v;

    vector<vector<int>> arr(n);
    int t1, t2;
    for (int i = 0; i < m; i++) {
        cin >> t1 >> t2;
        arr[t1 - 1].push_back(t2 - 1);
        arr[t2 - 1].push_back(t1 - 1);
    }

    for (int i = 0; i < n; i++) {
        sort(arr[i].begin(), arr[i].end()); 
    }

    stack<int> st;
    queue<int> q;

    vector<bool> visited(n, false);
    dfs(v - 1, arr, visited);
    cout << "\n";
    
    fill(visited.begin(), visited.end(), false);
    bfs(v - 1, arr, visited);
    cout << "\n";

    return 0;
}
