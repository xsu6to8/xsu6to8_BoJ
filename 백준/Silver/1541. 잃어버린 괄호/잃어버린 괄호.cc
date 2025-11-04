#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string str;
    cin >> str;

    int result = 0;
    int num = 0;
    bool is_minus = false;

    for (int i = 0; i <= str.length(); i++) {
        if (isdigit(str[i])) {
            num = num * 10 + (str[i] - '0'); 
        }
        else {
            if (is_minus) {
                result -= num; 
            }
            else {
                result += num; 
            }
            num = 0; 
            if (str[i] == '-') {
                is_minus = true; 
            }
        }
    }

    cout << result;
    return 0;
}