#include <iostream>
#include <string>
#include <cctype>

using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string s1, s2;
	cin >> s1 >> s2;

	if (s1.length() >= s2.length())
		cout << "go";
	else
		cout << "no"; 

	return 0;
}
