#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int k;
int a[1030];
vector<vector<int>> tree(10);

void build(int s, int e, int level) {
    if (s > e) return;
    int mid = (s + e) / 2;
    tree[level].push_back(a[mid]);
    build(s, mid - 1, level + 1);
    build(mid + 1, e, level + 1);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> k;
    int n = pow(2, k) - 1;
    for (int i = 0; i < n; i++) cin >> a[i];
    build(0, n - 1, 0);
    for (int i = 0; i < k; i++) {
        for (int num : tree[i]) cout << num << " ";
        cout << "\n";
    }
    return 0;
}
