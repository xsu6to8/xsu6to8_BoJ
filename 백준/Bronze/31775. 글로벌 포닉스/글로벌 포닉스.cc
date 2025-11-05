#include <iostream>
#include <string>
#include <set>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

    set<char> initials;
    for (int i = 0; i < 3; i++) {
        string s;
        cin >> s;
        initials.insert(s[0]);
    }

    if (initials.count('l') && initials.count('k') && initials.count('p'))
        cout << "GLOBAL";
    else
        cout << "PONIX";

	return 0;
}