#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> h(n);
    for (int i = 0; i < n; i++) cin >> h[i];

    stack<int> st;
    long long ans = 0;

    for (int i = 0; i < n; i++) {
        while (!st.empty() && st.top() <= h[i]) {
            st.pop();
        }
        st.push(h[i]);
        ans += st.size() - 1;
    }

    cout << ans;
    return 0;
}
