#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<pair<int, int>> coord(n);
    for (int i = 0; i < n; ++i) 
        cin >> coord[i].first >> coord[i].second;

    int perimeter = 0;
    for (int i = 0; i < n; ++i) {
        int j = (i + 1) % n;

        int dx = abs(coord[i].first - coord[j].first);
        int dy = abs(coord[i].second - coord[j].second);
        perimeter += dx + dy; 
    }

    cout << perimeter;

    return 0;
}
