#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	string id;
	cin >> id;

	string coverted_id = "";
	for (auto c : id){
		if (islower(c))
			coverted_id += toupper(c);
		else if (isupper(c))
			coverted_id += tolower(c);
	}

	cout << coverted_id;

	return 0;
}