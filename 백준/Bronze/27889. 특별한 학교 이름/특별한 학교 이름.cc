#include <iostream>
#include <string>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string abbreviation;
	cin >> abbreviation;

	if (abbreviation == "NLCS")
		cout << "North London Collegiate School";
	else if (abbreviation == "BHA")
		cout << "Branksome Hall Asia";
	else if (abbreviation == "KIS")
		cout << "Korea International School";
	else if (abbreviation == "SJA")
		cout << "St. Johnsbury Academy";

	return 0;
}