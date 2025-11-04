#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double c, b;
    cin >> c >> b;

    cout << fixed << setprecision(11) << c / b;

    return 0;
}
