#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string a, b;
    cin >> a >> b;

    string min_a = "", max_a = "";
    string min_b = "", max_b = "";
    for (int i = 0; i < a.size(); i++) {
        if (a[i] == '5' || a[i] == '6') {
            min_a += '5';
            max_a += '6';
        }
        else {
            min_a += a[i];
            max_a += a[i];
        }
    }

    for (int i = 0; i < b.size(); i++) {
        if (b[i] == '5' || b[i] == '6') {
            min_b += '5';
            max_b += '6';
        }
        else {
            min_b += b[i];
            max_b += b[i];
        }
    }

    int min_sum = stoi(min_a) + stoi(min_b);
    int max_sum = stoi(max_a) + stoi(max_b);

    cout << min_sum << " " << max_sum;

    return 0;
}
