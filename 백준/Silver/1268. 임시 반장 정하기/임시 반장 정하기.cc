#include <bits/stdc++.h>
using namespace std;

int n;
int students[1001][5];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < 5; j++)
            cin >> students[i][j];

    int answer = 0;
    int maxCount = -1;

    for (int i = 0; i < n; i++) {
        int cnt = 0;
        for (int j = 0; j < n; j++) {
            if (i == j) continue;
            for (int k = 0; k < 5; k++) {
                if (students[i][k] == students[j][k]) {
                    cnt++;
                    break;  
                }
            }
        }
        if (cnt > maxCount) {
            maxCount = cnt;
            answer = i;
        }
    }

    cout << answer + 1; 
}
