#include <iostream>
#include <string>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	string uos = "UOS";
	int order = (n - 1) % 3;

	cout << uos[order];

	return 0;
}