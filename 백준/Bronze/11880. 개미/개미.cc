#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T;

    cin >> T;

    long long a, b, c, max_abc, sum;
    for (int i = 0; i < T; i++) {
        cin >> a >> b >> c;
        max_abc = max({a, b, c});
        
        if (max_abc == a) {
            sum = b + c;
        }
        else if (max_abc == b) {
            sum = a + c;
        }
        else {
            sum = a + b;
        }
        
        cout << max_abc * max_abc + sum * sum << "\n";
    }

    return 0;
}