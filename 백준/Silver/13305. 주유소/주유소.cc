#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    vector<long long> dist(n - 1);
    vector<long long> price(n);

    for (int i = 0; i < n - 1; i++)
        cin >> dist[i];


    for (int i = 0; i < n; i++)
        cin >> price[i];


    long long min_price = price[0];  
    long long total_cost = 0;        

    for (int i = 0; i < n - 1; i++) {
        if (price[i] < min_price) {
            min_price = price[i]; 
        }
        total_cost += min_price * dist[i]; 
    }

    cout << total_cost;
    return 0;
}
