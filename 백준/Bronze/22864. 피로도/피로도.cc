#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int a, b, c, m;
	cin >> a >> b >> c >> m;
	// a : 피로도, b : 일, c : 시간당 줄어들 피로도, m : max 피로도 

	int time = 0;
	int fatigue = 0;

	for (auto i = 0; i < 24; i++) {
		if (fatigue + a <= m) {
			time += b;
			fatigue += a;
		}
		else {
			fatigue -= c;
			if (fatigue < 0)
				fatigue = 0;
		}
	}

	cout << time;

	return 0;
}
