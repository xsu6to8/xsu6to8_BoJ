#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // s(0) -> c(1) -> b(2) -> c(0) -> ...
    int n;
    cin >> n;

    bool is_first = true;
    int cnt = 0;
    vector<int> milks;
    while (n--) {
        int temp;
        cin >> temp;

        if (is_first && temp == 0) {
            milks.push_back(temp);
            cnt++;
            is_first = false;
        }
        else if (!milks.empty()) {
            int last_idx = milks.size() - 1;
            if (temp == 1 && milks[last_idx] == 0) {
                milks.push_back(temp);
                cnt++;
            }
            else if (temp == 2 && milks[last_idx] == 1) {
                milks.push_back(temp);
                cnt++;
            }
            else if (temp == 0 && milks[last_idx] == 2) {
                milks.push_back(temp);
                cnt++;
            }
        }
    }

    cout << cnt;

    return 0;
}
