#include <iostream>
#include <string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string s1, s2;
	getline(cin, s1);	// cin으로 바로 가면 공백 처리 안됨
	getline(cin, s2);

	int cnt = 0;
	size_t pos = 0;
	while ((pos = s1.find(s2, pos)) != string::npos) {
		cnt++;
		pos += s2.length();  
	}

	cout << cnt;

	return 0;
}
