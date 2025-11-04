#include <bits/stdc++.h>
using namespace std;

int a, b;
int m;

long long a_to_dec;
stack<long long> dec_to_b;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> a >> b;
    cin >> m;
    
    while (m--) {
        long long temp; 
        cin >> temp;
        a_to_dec += temp * (pow(a, m));
    }

    while (a_to_dec != 0) {
        dec_to_b.push(a_to_dec % b);
        a_to_dec /= b;
    }
    
    while (!(dec_to_b.empty())) {
        cout << dec_to_b.top() << ' ';
        dec_to_b.pop();
    }
}
