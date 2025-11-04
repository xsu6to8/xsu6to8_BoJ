#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> cards(20);

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	for (int i = 0; i < 20; i++)
		cards[i] = i + 1;
	
	int rep = 10;
	int fir, sec;
	while (rep--)
	{
		cin >> fir >> sec;
		reverse(cards.begin() + fir - 1, cards.begin() + sec);

	}

	for (auto i : cards)
		cout << i << ' ';

	return 0;
}