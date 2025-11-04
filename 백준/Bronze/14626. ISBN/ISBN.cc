#include <bits/stdc++.h>
using namespace std;

int ISBN[13];  
string s;
int idx = -1;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> s;
    for (int i = 0; i < 13; i++) {
        if (s[i] == '*')
            idx = i;
        else 
            ISBN[i] = s[i] - '0';
    }

    for (int x = 0; x <= 9; x++) {
        ISBN[idx] = x;

        int sum = 0;
        for (int i = 0; i < 12; i++) {
            if (i % 2 == 0) 
                sum += ISBN[i];
            else 
                sum += 3 * ISBN[i];
        }

        int m = (10 - (sum % 10)) % 10; 

        if (ISBN[12] == m) { 
            cout << x;
            return 0;
        }
    }

    return 0;  
}
