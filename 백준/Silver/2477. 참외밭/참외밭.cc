#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int k;
    cin >> k;

    vector<pair<int, int>> sides(6);
    for (int i = 0; i < 6; i++) {
        cin >> sides[i].first >> sides[i].second; 
    }

    int maxWidth = 0, maxHeight = 0;
    int maxWIdx = -1, maxHIdx = -1;

    for (int i = 0; i < 6; i++) {
        if (sides[i].first == 1 || sides[i].first == 2) { 
            if (sides[i].second > maxWidth) {
                maxWidth = sides[i].second;
                maxWIdx = i;
            }
        }
        else { 
            if (sides[i].second > maxHeight) {
                maxHeight = sides[i].second;
                maxHIdx = i;
            }
        }
    }

    int smallWidth = abs(sides[(maxHIdx + 5) % 6].second - sides[(maxHIdx + 1) % 6].second);
    int smallHeight = abs(sides[(maxWIdx + 5) % 6].second - sides[(maxWIdx + 1) % 6].second);

    int area = (maxWidth * maxHeight) - (smallWidth * smallHeight);
    cout << area * k;
}
