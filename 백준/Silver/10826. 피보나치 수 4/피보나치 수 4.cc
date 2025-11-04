#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string add(string fir, string sec) {
    reverse(fir.begin(), fir.end());
    reverse(sec.begin(), sec.end());

    int carry = 0;
    string result;

    while (fir.length() < sec.length()) 
        fir += '0';
    while (fir.length() > sec.length()) 
        sec += '0';
    
    int temp;
    for (int i = 0; i < fir.length(); ++i) {
        temp = (fir[i] - '0' + sec[i] - '0' + carry) % 10;
        result += to_string(temp);
        carry = (fir[i] - '0' + sec[i] - '0' + carry) / 10;
    }
    if (carry != 0) {
        result += to_string(carry);
    }

    reverse(result.begin(), result.end());

    return result;

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string fib[10001];
    fib[0] = '0';
    fib[1] = '1';

    int n;
    cin >> n;

    for (int i = 2; i <= n; i++)
        fib[i] = add(fib[i - 1], fib[i - 2]);

    cout << fib[n];

    return 0;
}
