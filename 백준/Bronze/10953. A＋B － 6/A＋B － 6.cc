#include <iostream>
#include <string>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	while (n--)
	{
		string s;
		cin >> s;
		int a = s[0] - '0';
		int b = s[2] - '0';

		cout << a + b << endl;
	}

	return 0;
}