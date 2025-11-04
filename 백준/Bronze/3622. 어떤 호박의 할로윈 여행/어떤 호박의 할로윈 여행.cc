#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
	int A, a, B, b, P;

	bool c = false;

	cin >> A >> a >> B >> b >> P;

	if (A + B <= P)
		c = true;

	else if (a >= B && P >= A)
		c = true;

	else if (A <= b && P >= B)
		c = true;

	cout << ((c == true) ? "Yes" : "No");

    return 0;
}
