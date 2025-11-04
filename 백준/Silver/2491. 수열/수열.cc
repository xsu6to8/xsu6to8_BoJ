#include <bits/stdc++.h>
using namespace std;

int n;
int arr[100001];
int incr[100001];
int decr[100001];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    if (n == 1) {
        cout << 1;
        return 0;
    }

    incr[0] = 1;
    decr[0] = 1;

    for (int i = 1; i < n; i++) {
        if (arr[i] >= arr[i - 1])
            incr[i] = incr[i - 1] + 1;
        else
            incr[i] = 1; 

        if (arr[i] <= arr[i - 1])
            decr[i] = decr[i - 1] + 1;
        else
            decr[i] = 1; 
    }

    int max_incr = *max_element(incr, incr + n);
    int max_decr = *max_element(decr, decr + n);  

    cout << max(max_incr, max_decr);
}
