#include <iostream>

using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        int fib[46];
        fib[0] = 1;
        fib[1] = 1;

        for (int i = 2; i <= temp; i++)
            fib[i] = fib[i - 1] + fib[i - 2];

        cout << fib[temp] << endl;
    }

    return 0;
}
