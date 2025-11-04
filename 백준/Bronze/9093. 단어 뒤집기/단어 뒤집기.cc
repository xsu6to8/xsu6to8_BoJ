#include <iostream>
#include <sstream>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t;
	cin >> t;
	cin.ignore();

	while (t--)
	{
		string sent;
		getline(cin, sent);
		stringstream ss(sent);

		string word;
		while (ss >> word) {
			reverse(word.begin(), word.end());
			cout << word << " ";
		}
		cout << '\n';
	}
	return 0;
}