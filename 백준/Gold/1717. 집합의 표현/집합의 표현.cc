#include <bits/stdc++.h>

using namespace std;

vector<int> parent;

int find(int x) {
    if (parent[x] == x) return x;
    return parent[x] = find(parent[x]);
}

void unionSet(int a, int b) {
    a = find(a);
    b = find(b);
    if (a != b) 
        parent[b] = a;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    cin >> n >> m;

    parent.resize(n + 1);
    for (int i = 0; i <= n; i++) {
        parent[i] = i;
    }

    for (int i = 0; i < m; i++) {
        int cmd, a, b;
        cin >> cmd >> a >> b;

        if (cmd == 0) {
            unionSet(a, b);
        }
        else {
            if (find(a) == find(b)) 
                cout << "YES\n";
            else 
                cout << "NO\n";
        }
    }



    return 0;
}