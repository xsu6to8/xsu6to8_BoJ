#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string str;
	cin >> str;

	int time = 0;
	char prevC = 'A';
	for (int i = 0; i < str.length(); i++)
	{
		char nowC = str[i];
		int diff = abs(nowC - prevC); 
		int rotateTime = min(diff, 26 - diff); 
		time += rotateTime;

		prevC = nowC;
	}

	cout << time;

	return 0;
}
