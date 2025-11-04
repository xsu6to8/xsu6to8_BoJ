#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int count = 0;

    while (n >= 5) {
        count += n / 5;
        n /= 5;
    }

    cout << count;

    return 0;
}
