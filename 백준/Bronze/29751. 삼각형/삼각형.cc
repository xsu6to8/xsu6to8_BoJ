#include <iostream>
#include <iomanip>  // setprecision

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int w, h;
    cin >> w >> h;

    double s = static_cast<double>(w * h) / 2;

    cout << fixed << setprecision(1) << s;

    return 0;
}
