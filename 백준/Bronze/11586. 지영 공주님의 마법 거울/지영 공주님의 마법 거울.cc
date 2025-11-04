#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	vector<string> mirror(n);
	for (int i = 0; i < n; i++)
		cin >> mirror[i];

	int k;
	cin >> k;

	if (k == 1){
		for (auto str : mirror)
			cout << str << endl;
	}
	else if (k == 2){
		for (int i = 0; i < n; i++){
			string t = mirror[i];
			reverse(t.begin(), t.end());
			mirror[i] = t;
		}
		for (auto str : mirror)
			cout << str << endl;
	}
	else if (k == 3){
		for (int i = 0; i < (n + 1) / 2; i++){
			string upper = mirror[i];
			string lower = mirror[n -1 - i];

			string temp = upper;
			mirror[i] = lower;
			mirror[n - 1 - i] = temp;
		}
		for (auto str : mirror)
			cout << str << endl;
	}

	return 0;
}
