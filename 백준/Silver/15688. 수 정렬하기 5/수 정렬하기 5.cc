#include <bits/stdc++.h>
using namespace std;

int n;
int cnt[2000005];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
   
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        cnt[temp + 1000000]++;
    }

    for (int i = 0; i < 2000005; i++) {
        if (cnt[i]) {
            for (int j = 0; j < cnt[i]; j++) {
                cout << i - 1000000 << '\n';
            }
        }
    }
}