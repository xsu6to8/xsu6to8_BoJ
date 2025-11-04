#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, k;
    cin >> n >> k;

    queue<int> q;
    for (int i = 1; i <= n; i++) {
        q.push(i);
    }

    vector<int> result;

    while (!q.empty()) {
        for (int i = 0; i < k - 1; i++) {
            q.push(q.front());
            q.pop();
        }
        result.push_back(q.front());
        q.pop();
    }

    cout << "<";
    for (int i = 0; i < result.size(); i++) {
        if (i != 0) cout << ", ";
        cout << result[i];
    }
    cout << ">";
    
    return 0;
}
