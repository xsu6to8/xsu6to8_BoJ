#include <bits/stdc++.h>
using namespace std;

int b, c, d;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> b >> c >> d;

	vector<int> burger;
	vector<int> side;
	vector<int> beverage;

	while (b--) {
		int temp;
		cin >> temp;
		burger.push_back(temp);
	}
	while (c--) {
		int temp;
		cin >> temp;
		side.push_back(temp);
	}
	while (d--) {
		int temp;
		cin >> temp;
		beverage.push_back(temp);
	}

	int total = 0;
	for (int x : burger)
		total += x;
	for (int x : side)
		total += x;
	for (int x : beverage)
		total += x;

	sort(burger.begin(), burger.end(), greater<>());
	sort(side.begin(), side.end(), greater<>());
	sort(beverage.begin(), beverage.end(), greater<>());

	int setCnt = min({ (int)burger.size(), (int)side.size(), (int)beverage.size() });
	int discountTotal = 0;

	for (int i = 0; i < setCnt; ++i) {
		int sum = burger[i] + side[i] + beverage[i];
		discountTotal += sum * 0.9;
	}

	for (int i = setCnt; i < burger.size(); ++i)
		discountTotal += burger[i];
	for (int i = setCnt; i < side.size(); ++i)
		discountTotal += side[i];
	for (int i = setCnt; i < beverage.size(); ++i)
		discountTotal += beverage[i];

	cout << total << "\n" << discountTotal << "\n";

	return 0;
}
