#include <iostream>
#include <algorithm>
#include <vector>
#include <sstream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = n - i; j < n; j++)
		{
			cout << " ";
		}
		for (int j = i; j < n; j++)
		{
			cout << "*";
		}
		cout << '\n';
	}

	return 0;
}