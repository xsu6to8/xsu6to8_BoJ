#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int rep = 100;
	while (rep--)
	{
		string s;
		getline(cin, s);
		cout << s << endl;
	}

	return 0;
}