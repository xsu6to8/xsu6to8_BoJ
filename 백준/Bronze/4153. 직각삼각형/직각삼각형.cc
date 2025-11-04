#include <bits/stdc++.h>
using namespace std;

vector<int> arr(3);

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    while (true) {
        cin >> arr[0] >> arr[1] >> arr[2];
        if (arr[0] == 0 && arr[1] == 0 && arr[2] == 0)
            return 0;

        sort(arr.begin(), arr.end());

        if (pow(arr[2], 2) == ( pow(arr[0], 2) + pow(arr[1], 2)) )
            cout << "right\n";
        else
            cout << "wrong\n";
    }
    
}
