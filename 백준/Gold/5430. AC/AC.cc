#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        string commands; cin >> commands;
        int n; cin >> n;
        string nums; cin >> nums;

        deque<int> dq;
        string num = "";
        for (int i = 1; i < nums.size(); i++) {
            if (isdigit(nums[i])) {
                num += nums[i];
            } else {
                if (!num.empty()) {
                    dq.push_back(stoi(num));
                    num = "";
                }
            }
        }

        bool from_front = true;
        bool is_error = false;

        for (char c : commands) {
            if (c == 'R') {
                from_front = !from_front;
            } else if (c == 'D') {
                if (dq.empty()) {
                    cout << "error\n";
                    is_error = true;
                    break;
                } else {
                    if (from_front) dq.pop_front();
                    else dq.pop_back();
                }
            }
        }

        if (!is_error) {
            cout << "[";
            if (from_front) {
                for (int i = 0; i < dq.size(); i++) {
                    cout << dq[i];
                    if (i != dq.size() - 1) cout << ",";
                }
            } else {
                for (int i = dq.size() - 1; i >= 0; i--) {
                    cout << dq[i];
                    if (i != 0) cout << ",";
                }
            }
            cout << "]\n";
        }
    }

    return 0;
}
