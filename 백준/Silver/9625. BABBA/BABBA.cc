#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int k;
    cin >> k;

    int a[46] = { 0 };  //  [-1 / +1]
    int b[46] = { 0 };  //  [+1 /  0]

    a[0] = 1;
    b[0] = 0;

    for (int i = 1; i <= k; i++)
    {
        a[i] = b[i - 1];
        b[i] = a[i - 1] + b[i - 1];
    }

    cout << a[k] << " " << b[k];

    return 0;
}
