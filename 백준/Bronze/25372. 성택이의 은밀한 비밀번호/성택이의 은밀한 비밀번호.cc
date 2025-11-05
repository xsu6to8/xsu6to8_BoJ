#include <iostream>
#include <string>
#include <cctype>

using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	while (n--){
		string s;
		cin >> s;
		if ((s.length() >= 6) && (s.length() <= 9))
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}
}
