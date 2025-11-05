#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    char first_char;
    cin >> first_char;

    if (first_char == 'M') {
        cout << "MatKor";
    } else if (first_char == 'W') {
        cout << "WiCys";
    } else if (first_char == 'C') {
        cout << "CyKor";
    } else if (first_char == 'A') {
        cout << "AlKor";
    } else if (first_char == '$') {
        cout << "$clear";
    }

    return 0;
}
