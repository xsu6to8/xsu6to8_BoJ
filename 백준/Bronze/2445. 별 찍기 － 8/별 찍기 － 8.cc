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
	
	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j < i; j++)
			cout << '*';
		for (int k = i; k < n; k++)
			cout << ' ';
		for (int l = i; l < n; l++)
			cout << ' ';
		for (int m = 0; m < i; m++)
			cout << '*';

		cout << '\n';
	}
	for (int i = n - 1; i > 0; i--)
	{
		for (int j = 0; j < i; j++)
			cout << '*';
		for (int k = i; k < n; k++)
			cout << ' ';
		for (int l = i; l < n; l++)
			cout << ' ';
		for (int m = 0; m < i; m++)
			cout << '*';

		cout << '\n';
	}


	return 0;
}