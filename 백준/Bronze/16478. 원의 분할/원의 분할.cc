#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    double p_ab, p_bc, p_cd;
    cin >> p_ab >> p_bc >> p_cd;

    double t = p_ab * p_cd;

    cout << fixed << setprecision(6) << t / p_bc;

    return 0;
}
