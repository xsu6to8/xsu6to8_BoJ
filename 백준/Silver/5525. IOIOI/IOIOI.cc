#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m;
    string s;
    cin >> n >> m >> s;
    
    int cnt = 0;
    int consecutive = 0;
    
    for (int i = 0; i < m - 2; i++) {
        if (s[i] == 'I' && s[i + 1] == 'O' && s[i + 2] == 'I') {
            consecutive++;
            if (consecutive >= n) {
                cnt++;
            }
            i++; 
        } else {
            consecutive = 0;
        }
    }
    
    cout << cnt;
    return 0;
}
