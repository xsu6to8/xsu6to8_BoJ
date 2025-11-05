#include <iostream>
#include <cmath>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    cin >> n >> m;

    int x_start = 0, y_start = 0;
    int x_end = 0, y_end = 0;
    
    bool is_start = true;
    for (auto i = 0; i < n; i++)
    {
        for (auto j = 0; j < m; j++) {
            int temp;
            cin >> temp;
            if (temp == 1 && is_start) {
                x_start = i;
                y_start = j;
                is_start = false;
            }
            else if (temp == 1) {
                x_end = i;
                y_end = j;
                break;
            }
        }
    }

    cout << abs(x_end - x_start) + abs(y_end - y_start);

    return 0;
}
