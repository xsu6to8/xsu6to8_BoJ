#include <iostream>
#include <string>
#include <cctype>

using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string str;
	cin >> str;

	string answer = "";
	for (auto c : str){
		if (islower(c)){
			c = toupper(c);
			answer += c;
		}
		else if (isupper(c)){
			c = tolower(c);
			answer += c;
		}
	}

	cout << answer;

	return 0;
}
