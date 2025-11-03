#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	unordered_set<char> one_hole = { 'A', 'a', 'b', 'D', 'd', 'e', 'g', 'O', 'o',
		'P', 'p', 'Q', 'q', 'R', '@' };
	
	string s;
	getline(cin, s);

	int cnt = 0;
	for (auto c : s){
		if (one_hole.count(c))
			cnt++;
		else if (c == 'B')
			cnt += 2;
	}

	cout << cnt;

	return 0;
}