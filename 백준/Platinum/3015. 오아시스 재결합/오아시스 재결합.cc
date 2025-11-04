#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    stack<pair<int, int>> st;   //  height & cnt
    long long answer = 0;

    while (n--) {
        int h;
        cin >> h;

        int cnt = 1;

        while (!st.empty() && st.top().first <= h) {
            answer += st.top().second;

            if (st.top().first == h)
                cnt += st.top().second;

            st.pop();
        }

        if (!st.empty())
            answer++;

        st.push({ h, cnt });
    }

    cout << answer;
    return 0;
}
