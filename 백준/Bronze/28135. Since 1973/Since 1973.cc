#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, cnt = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if (to_string(i).find("50") != string::npos)
            cnt += 2;
        else
            cnt += 1;
    }
    if (to_string(n).find("50") != string::npos)
        cnt -= 1;
    cout << cnt << endl;
    return 0;
}
