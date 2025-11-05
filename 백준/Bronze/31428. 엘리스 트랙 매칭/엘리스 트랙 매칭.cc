#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    cin.ignore(); 

    string s;
    getline(cin, s); 

    char c;
    cin >> c; 

    int cnt = 0;
    stringstream ss(s);
    string token;

    while (ss >> token) {
        if (token[0] == c) {
            cnt++;
        }
    }

    cout << cnt;
    return 0;
}
