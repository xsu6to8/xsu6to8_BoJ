#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int T;
	cin >> T;

	while (T--) {
		int N;
		cin >> N;
		vector<int> target(N + 1);  
		for (int i = 1; i <= N; ++i)
			cin >> target[i];

		vector<bool> visited(N + 1, false);
		int current = 1;
		int count = 0;

		while (!visited[current]) {
			if (current == N) {
				cout << count << '\n';
				break;
			}

			visited[current] = true;
			current = target[current];
			count++;
		}

		if (visited[current] && current != N) 
			cout << 0 << '\n';
	}

	return 0;
}
