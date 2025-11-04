#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    
    vector<int> a(n);
    vector<int> b(n);

    int temp;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        a[i] = temp;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        b[i] = temp;
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end(), greater<int>());

    int result = 0;

    for (int i = 0; i < n; i++)
        result += a[i] * b[i];

    cout << result;

    return 0;
}