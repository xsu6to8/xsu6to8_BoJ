#include <iostream>

using namespace std;

long long count_factor(long long n, int k) {
    long long count = 0;
    while (n >= k) {
        count += n / k;
        n /= k;
    }
    return count;
}

int main() {
    long long n, m;
    cin >> n >> m;

    long long two_count = count_factor(n, 2) - count_factor(m, 2) - count_factor(n - m, 2);
    long long five_count = count_factor(n, 5) - count_factor(m, 5) - count_factor(n - m, 5);

    cout << min(two_count, five_count) << endl;

    return 0;
}
