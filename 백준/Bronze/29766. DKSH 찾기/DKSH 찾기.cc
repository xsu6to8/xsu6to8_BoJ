#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    
    int cnt = 0;
    for (size_t i = 0; i + 3 < s.size(); ++i) {
        if (s.substr(i, 4) == "DKSH") {
            cnt++;
        }
    }

    cout << cnt << '\n';
    return 0;
}
