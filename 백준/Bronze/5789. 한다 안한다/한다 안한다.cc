#include <iostream>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N;
    while (N--) {
        string s;
        cin >> s;
        int left = 0;
        int right = s.length() - 1;
        while (left < right) {
            left++;
            right--;
        }
        if (s[left] == s[right])
            cout << "Do-it" << endl;
        else
            cout << "Do-it-Not" << endl;
    }
    return 0;
}
