#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b, result;
    cin >> a >> b;
    if (a.size() < b.size()) swap(a, b);
    int diff = a.size() - b.size();
    b = string(diff, '0') + b;
    int carry = 0;
    for (int i = a.size() - 1; i >= 0; i--) {
        int sum = (a[i] - '0') + (b[i] - '0') + carry;
        carry = sum / 10;
        result = char(sum % 10 + '0') + result;
    }
    if (carry) result = char(carry + '0') + result;
    cout << result << endl;
    return 0;
}
