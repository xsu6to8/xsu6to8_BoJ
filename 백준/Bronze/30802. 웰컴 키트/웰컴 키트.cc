#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long N; 
    cin >> N;

    long long S, M, L, XL, XXL, XXXL;
    cin >> S >> M >> L >> XL >> XXL >> XXXL;

    long long T, P;
    cin >> T >> P;

    auto bundles = [&](long long x) {
        return (x + T - 1) / T;
    };

    long long tshirt_bundles = 
        bundles(S) + bundles(M) + bundles(L) + bundles(XL) + bundles(XXL) + bundles(XXXL);

    cout << tshirt_bundles << "\n";

    long long max_p_bundles = N / P;
    long long leftover_pens = N % P;

    cout << max_p_bundles << " " << leftover_pens << "\n";

    return 0;
}
