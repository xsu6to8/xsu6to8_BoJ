#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    cin >> n >> m;

    vector<int> cards(m);

    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        cards.push_back(a);

    }

    sort(cards.begin(), cards.end(), greater<>());

    int goal = 0;
    int money = 0;
    for (auto i : cards) {
        if (goal >= m - 1)
            break;

        if (i >= n)
            goal++;
        else {
            goal++;
            money += (n - i);
        }
    }

    cout << money;

    return 0;
}
