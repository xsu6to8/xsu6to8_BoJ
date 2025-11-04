#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    while (cin >> n) {
        if (n == 0)
            break;

        vector<int> arr(n);
        for (auto i = 0; i < n; i++)
            cin >> arr[i];

        stack<int> l_st; 
        vector<int> left(n, -1); // idx 저장
        for (int i = 0; i < n; i++) {
            while (!l_st.empty() && arr[l_st.top()] >= arr[i]) {
                l_st.pop();
            }
            if (!l_st.empty()) {
                left[i] = l_st.top(); // 직사각형의 왼쪽에서 가장 작은 값
            }
            l_st.push(i);
        }

        stack<int> r_st; 
        vector<int> right(n, n); // idx 저장
        for (int i = n - 1; i >= 0; i--) {
            while (!r_st.empty() && arr[r_st.top()] >= arr[i]) {
                r_st.pop();
            }
            if (!r_st.empty()) {
                right[i] = r_st.top(); // 직사각형의 오른쪽에서 가장 작은 값
            }
            r_st.push(i);
        }

        long long max_area = 0;
        for (int i = 0; i < n; i++) {
            long long width = right[i] - left[i] - 1; 
            long long height = arr[i]; 
            max_area = max(max_area, width * height); 
        }

        cout << max_area << "\n";
    }

    return 0;
}
