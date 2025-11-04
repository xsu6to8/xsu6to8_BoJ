#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, sum = 0, maxCost = 0, temp;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> temp;
        sum += temp;
        if (temp > maxCost) maxCost = temp;
    }

    cout << sum - maxCost;
    return 0;
}

// sort 없이, 입력하면서 max만 거르고도 가능