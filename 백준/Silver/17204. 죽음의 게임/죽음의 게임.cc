#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, k;
    cin >> n >> k;

    vector<int> point(n);
    for (int i = 0; i < n; i++) 
        cin >> point[i];  

    vector<bool> visited(n, false);  
    int current = 0;
    int count = 1;

    while (!visited[current]) {
        visited[current] = true;
        if (point[current] == k) {
            cout << count;
            return 0;
        }
        current = point[current];
        count++;
    }

    cout << -1; 
    return 0;
}
