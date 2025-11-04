#include <iostream>
#include <cmath>

using namespace std;

int happiness[11] = { 0 };

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    happiness[2] = 1;
    int sum = 0;

    int n;
    cin >> n;

    for (int i = 3; i <= n; i++)
    {
        int temp = i / 2;   // int 나눗셈 => 버림
        happiness[i] = (temp * (i - temp)) + happiness[temp] + happiness[i - temp];
    }

    cout << happiness[n];

    return 0;
}
