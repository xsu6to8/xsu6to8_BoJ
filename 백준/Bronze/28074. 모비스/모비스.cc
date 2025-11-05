#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string s;
	cin >> s;

	vector<bool> letters(5, false);
	for (int i = 0; i < s.length(); i++){
		if (s[i] == 'M')
			letters[0] = true;
		else if (s[i] == 'O')
			letters[1] = true;
		else if (s[i] == 'B')
			letters[2] = true;
		else if (s[i] == 'I')
			letters[3] = true;
		else if (s[i] == 'S')
			letters[4] = true;
	}

	for (auto b : letters){
		if (b == false){
			cout << "NO";
			return 0;
		}
	}

	cout << "YES";
	return 0;
}