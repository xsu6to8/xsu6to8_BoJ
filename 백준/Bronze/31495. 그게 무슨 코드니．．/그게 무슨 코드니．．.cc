#include <iostream>
#include <string>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
    getline(cin, s);

    if (s.size() >= 2 && s[0] == '\"' && s[s.size() - 1] == '\"' && s.size() > 2) {
        cout << s.substr(1, s.size() - 2);
    } else {
        cout << "CE";
    }

    return 0;
}
// 공백 처리