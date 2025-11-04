#include <iostream>
using namespace std;
typedef long long ll;

int main(){
    int ans = 1;

    ll N; cin >> N;
    while (N != 1) {
        ans++;
        if (N & 1) N = 3 * N + 1;
        else N /= 2;
    }

    cout << ans;
}