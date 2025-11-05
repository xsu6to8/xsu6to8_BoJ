#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    vector<int> prices(n);
    for (int i = 0; i < n; ++i) 
        cin >> prices[i];

    int minPrice = prices[0];  
    int maxProfit = 0;

    for (int i = 1; i < n; ++i) {
        maxProfit = max(maxProfit, prices[i] - minPrice);
        minPrice = min(minPrice, prices[i]);
    }

    cout << maxProfit;

    return 0;
}
