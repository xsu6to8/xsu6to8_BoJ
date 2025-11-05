#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	unordered_set<string> promises = { "Never gonna give you up"
		, "Never gonna let you down"
		, "Never gonna run around and desert you"
		, "Never gonna make you cry"
		, "Never gonna say goodbye"
		, "Never gonna tell a lie and hurt you"
		, "Never gonna stop" };

	cin.ignore();

	bool hacked = false;
	while (n--)
	{
		string s;
		getline(cin, s);

		if (promises.find(s) == promises.end())
			hacked = true;
	}

	if (hacked)
		cout << "Yes";
	else
		cout << "No";

	return 0;
}