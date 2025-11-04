#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, k;
	cin >> n >> k;

	vector<int> arr(n);
	
	int temp;
	int max_index = 0;
	for (int i = 0; i < n; i++) {
		cin >> temp;
		arr[i] = temp;
		if (temp <= k)    // 같은 case 처리
			max_index = i;
	}

	int count = 0;
	for (int j = max_index; j >= 0; j--)
	{
		count += k / arr[j];
		k %= arr[j];
	}

	cout << count;
}