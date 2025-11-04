#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long long a, b, c, d;
	cin >> a >> b >> c >> d;
	
	string a1, a2;
	a1 = to_string(a) + to_string(b);
	a2 = to_string(c) + to_string(d);

	cout << stoll(a1) + stoll(a2);

	return 0;
}