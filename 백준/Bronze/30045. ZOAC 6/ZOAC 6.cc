#include <iostream>
#include <string>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	int cnt = 0;
	while (n--){
		string s;
		cin >> s;
		for (int i = 0; i < s.size() - 1; i++)
		{
			string temp = s.substr(i, 2);
			if (temp == "01" || temp == "OI"){
				cnt++;
				break;
			}
		}
	}

	cout << cnt;

	return 0;
}