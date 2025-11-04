#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // a : 300, b : 60, c : 10

    vector<int> cnt(3, 0);

    int t;
    cin >> t;

    bool is_possible = true;

    while (t > 0) {
        if (!(t % 10) && (t != 0)) {
            if (t >= 300)
            {
                cnt[0] += t / 300;
                t %= 300;
            }
            else if (t >= 60) {
                cnt[1] += t / 60;
                t %= 60;
            }
            else {
                cnt[2] += t / 10;
                t %= 10;
            }
        }
        else {
            is_possible = false;
            break;
        }
    }

    if (!is_possible)
        cout << -1;

    else {
        for (auto i : cnt)
            cout << i << " ";
    }


    return 0;
}
