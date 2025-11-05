#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    vector<int> tops(n);

    int cnt = 0;
    for (auto i = 0; i < n; i++)
    {
        cin >> tops[i];
        
        if (i > 0) {
            if (tops[i - 1] > tops[i])
                continue;
        }

        cnt++;
    }

    cout << cnt;

    return 0;
}
