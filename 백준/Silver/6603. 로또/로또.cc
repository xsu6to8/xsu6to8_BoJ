#include <bits/stdc++.h>
using namespace std;

int k;
const int lotto = 6;

//	Combination(조합) 사용
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	while(cin >> k) {
		if (k == 0)
			break;

		vector<int> nums;
		for (int i = 0; i < k; i++)
		{
			int temp; cin >> temp;
			nums.push_back(temp);
		}

		vector<int> orders;
		for (int i = 0; i < k; i++)
		{
			if (i < lotto)
				orders.push_back(0);
			else
				orders.push_back(1);
		}

		do
		{
			for (int i = 0; i < k; i++)
			{
				if (orders[i] == 0)
					cout << nums[i] << ' ';
			}
			cout << '\n';
		} while (next_permutation(orders.begin(), orders.end()));
		
		cout << '\n';
	}
}