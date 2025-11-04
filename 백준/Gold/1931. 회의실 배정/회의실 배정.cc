#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


bool compare(pair<int, int> a, pair<int, int> b) {
    if (a.second == b.second) return a.first < b.first; 
    return a.second < b.second;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    vector<pair<int, int>> meetings(n);

    for (int i = 0; i < n; i++) {
        cin >> meetings[i].first >> meetings[i].second;
    }

    sort(meetings.begin(), meetings.end(), compare);

    int count = 0; 
    int end_time = 0; 

    for (int i = 0; i < n; i++) {
        if (meetings[i].first >= end_time) {
            end_time = meetings[i].second; 
            count++;
        }
    }

    cout << count;

    return 0;
}
