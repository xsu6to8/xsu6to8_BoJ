#include "bits/stdc++.h"

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	for (int i = 0; i < 3; i++)
	{
		int num_of_one = 0;
		int temp;
		for (int i = 0; i < 4; i++)
		{
			cin >> temp;
			if (temp == 1)
				num_of_one++;
		}
		if (num_of_one == 0)
			cout << "D" << '\n';
		if (num_of_one == 1)
			cout << "C" << '\n';
		if (num_of_one == 2)
			cout << "B" << '\n';
		if (num_of_one == 3)
			cout << "A" << '\n';
		if (num_of_one == 4)
			cout << "E" << '\n';
	}

	return 0;
}