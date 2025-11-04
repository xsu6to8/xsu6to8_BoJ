#include <iostream>
#include <string>


using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	cin.ignore();
	for (int i = 1; i <= n; i++)
	{
		string s;
		getline(cin, s);
		string num = to_string(i);
		s = num + ". " + s;

		cout << s << endl;
	}

	return 0;
}
