#include <bits/stdc++.h>
using namespace std;

int n;
int r[100005];

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> r[i];
    sort(r, r + n);
    
    int max_w = -1;
    int num = n;
    for (int i = 0; i < n; i++)
    {
        int curr_w = (num--) * r[i];
        max_w = max(max_w, curr_w);
    }
    cout << max_w;
}
