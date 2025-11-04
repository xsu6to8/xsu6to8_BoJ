#include <bits/stdc++.h>
using namespace std;

#define ll long long

int n;
ll arr[100005];

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;
	for (int i = 0; i < n; i++) {
        string temp;
        cin >> temp;

        reverse(temp.begin(), temp.end());

        int start_idx = 0;
        for (int j = 0; j < temp.size(); j++) {
            if (temp[j] != '0') {
                start_idx = j;
                break;
            }
        }

        string cleaned;
        if (start_idx < temp.size()) 
            cleaned = temp.substr(start_idx);  
        else 
            cleaned = "0"; 
        
        arr[i] = stoll(cleaned);
	}
	
    sort(arr, arr + n);
    for (int i = 0; i < n; i++)
        cout << arr[i] << '\n';
	
}