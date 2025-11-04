#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	cin.ignore(); 

	while (n--) {
		string line;
		getline(cin, line); 

		stringstream ss(line);
		vector<string> nicks;
		string nick;

		while (ss >> nick) 
			nicks.push_back(nick);

		cout << "god";
		for (int i = 1; i < nicks.size(); i++)
			cout << nicks[i];
		cout << endl;
	}

	return 0;
}
