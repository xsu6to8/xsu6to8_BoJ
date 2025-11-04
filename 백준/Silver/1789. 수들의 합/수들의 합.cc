#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

uint32_t max_n(uint32_t num) {
    uint32_t n = static_cast<uint32_t>((-1 + sqrt(1 + 8.0 * num)) / 2);

    while (n * (n + 1) / 2 > num) {
        n--;
    }

    return n;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    uint32_t s;
    cin >> s;

    uint32_t result = max_n(s);
    cout << result;

    return 0;
}
