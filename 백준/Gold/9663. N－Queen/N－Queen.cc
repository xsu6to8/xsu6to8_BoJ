#include <iostream>

using namespace std;

bool isused1[40];	//	열
bool isused2[40];	//	좌대각
bool isused3[40];	//	우대각

int n;
int cnt = 0;
void func(int cur){
	if (cur == n){
		cnt++;
		return;
	}

	for (int i = 0; i < n; i++)
	{
		if (isused1[i] || isused2[i + cur] || isused3[cur - i + n - 1])
			continue;
		isused1[i] = true;
		isused2[i + cur] = true;
		isused3[cur - i + n - 1] = true;
	
		func(cur + 1);

		isused1[i] = false;
		isused2[i + cur] = false;
		isused3[cur - i + n - 1] = false;
	}

}

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;
	func(0);
	cout << cnt;
}