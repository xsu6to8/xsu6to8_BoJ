#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    vector<int> pos, neg;
    int zeros = 0;
    int total = 0;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x > 0) 
            pos.push_back(x);
        else if (x < 0) 
            neg.push_back(x);
        else zeros++;
    }

    // 양수는 내림차순, 음수는 오름차순 정렬
    sort(pos.rbegin(), pos.rend());
    sort(neg.begin(), neg.end());

    for (int i = 0; i < pos.size(); i += 2) {
        if (i + 1 < pos.size()) {
            if (pos[i] > 1 && pos[i + 1] > 1) 
                total += pos[i] * pos[i + 1];
            else 
                total += pos[i] + pos[i + 1];
        }
        else 
            total += pos[i];
    }

    for (int i = 0; i < neg.size(); i += 2) {
        if (i + 1 < neg.size()) 
            total += neg[i] * neg[i + 1];
        else {
            // 홀수 개 음수가 남으면
            if (zeros > 0) {
                // 0 곱하기 (결과는 0이므로 아무것도 안함)
            }
            else {
                total += neg[i];
            }
        }
    }

    cout << total;
}
