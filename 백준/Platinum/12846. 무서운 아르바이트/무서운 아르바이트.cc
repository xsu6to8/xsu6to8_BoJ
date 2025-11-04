#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> t(n + 2); 
    for (int i = 1; i <= n; ++i) 
        cin >> t[i];

    stack<int> st;
    ll result = 0;

    // 사각형 넓이
    for (int i = 0; i <= n + 1; ++i) {
        while (!st.empty() && t[st.top()] > t[i]) {
            int height = t[st.top()];
            st.pop();
            int width = i - st.top() - 1;
            result = max(result, (ll)height * width);
        }
        st.push(i);
    }

    cout << result;
}
