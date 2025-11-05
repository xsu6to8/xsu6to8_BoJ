#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    
    vector<int> a(n);
    vector<int> b(n);
    for (auto i = 0; i < n; i++)
        cin >> a[i];
    for (auto i = 0; i < n; i++)
        cin >> b[i];

    int cnt = 0;
    for (auto i = 0; i < n; i++)
    {
        int temp = a[i] - b[i];
        if (temp > 0)
            cnt += temp;
    }

    cout << cnt;

    return 0;
}
