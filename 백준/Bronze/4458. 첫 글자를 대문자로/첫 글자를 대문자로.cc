#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore();
    string str;
    for (int i = 0; i < n; i++) {
        getline(cin, str);
        if ('a' <= str[0] && str[0] <= 'z')
            str[0] = str[0] - 'a' + 'A';
        cout << str << '\n';
    }
    return 0;
}
