#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string str;
	cin >> str;

	vector<int> nums(10);

	int temp;
	for (auto i = 0; i < str.length(); i++)
	{
		temp = static_cast<int>(str[i] - '0');
		nums[temp]++;
	}

	int six_and_nine = (nums[6] + nums[9] + 1) / 2;
	nums[6] = six_and_nine;
	nums[9] = six_and_nine;

	int sol = *max_element(nums.begin(), nums.end());

	cout << sol;
}