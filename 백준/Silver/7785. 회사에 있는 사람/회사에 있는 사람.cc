#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

int n;
unordered_set<string> us;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;
    while (n--) {
        string n, s;
        cin >> n >> s;

        if (s == "enter") 
            us.insert(n);
        if (s == "leave")
            us.erase(n);
    }

    vector<string> result(us.begin(), us.end());
    sort(result.begin(), result.end(), greater<>());
    for (auto st : result)
        cout << st << '\n';
}
