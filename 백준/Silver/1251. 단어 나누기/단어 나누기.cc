#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    string result = "z"; 

    int n = s.size();
    for (int i = 1; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            string a = s.substr(0, i);
            string b = s.substr(i, j - i);
            string c = s.substr(j);

            reverse(a.begin(), a.end());
            reverse(b.begin(), b.end());
            reverse(c.begin(), c.end());

            string combined = a + b + c;
            if (combined < result)
                result = combined;
        }
    }

    cout << result;
}
