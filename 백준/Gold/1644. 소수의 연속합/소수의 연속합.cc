#include <bits/stdc++.h>
using namespace std;

int n;
bool prime[4000001];
vector<int> pn;

void FillPrime(int num) {
	for (int i = 2; i <= num; i++)
		prime[i] = true;

	for (int i = 2; i <= sqrt(num); i++) {
		if (prime[i]) {
			for (int j = i * i; j <= num; j += i)
				prime[j] = false;
		}
	}

	for (int i = 2; i <= num; i++) {
		if (prime[i])
			pn.push_back(i);
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	cin >> n;
	if (n == 1) {
		cout << 0;
		return 0;
	}

	FillPrime(n);

	int start = 0, end = 0;
	int count = 0;
	long long current_sum = 0;
	int prime_count = pn.size();

	while (true) {
		if (current_sum >= n) {
			current_sum -= pn[start++];
		}
		else if (end == prime_count) {
			break;
		}
		else {
			current_sum += pn[end++];
		}

		if (current_sum == n) {
			count++;
		}
	}

	cout << count;
}