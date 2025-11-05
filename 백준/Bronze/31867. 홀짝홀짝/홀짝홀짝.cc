#include <iostream>
#include <string>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    string s;
    cin >> s;

    int even = 0, odd = 0;

    for (char c : s) {
        int digit = c - '0'; 
        if (digit % 2 == 0) {
            even++;
        }
        else {
            odd++;
        }
    }

    if (even > odd) {
        cout << 0; 
    }
    else if (odd > even) {
        cout << 1;  
    }
    else {
        cout << -1; 
    }

    return 0;
}
