#include <iostream>
#include <string>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	
	string s;
	cin >> s;
	for (int i = n - 5; i < n; i++)
		cout << s[i];

	return 0;
}