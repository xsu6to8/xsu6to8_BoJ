#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    int arrLen = 2 * n;

    vector<int> arr(arrLen);
    for (int i = 0; i < arrLen; i++)
        cin >> arr[i];

    sort(arr.begin(), arr.end());

    vector<int> pairs;
    for (int i = 0; i < n; i++)
    {
        int temp = arr[i] + arr[arrLen - 1 - i];
        pairs.push_back(temp);
    }

    sort(pairs.begin(), pairs.end());

    cout << pairs[0];

    return 0;
}
