#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    int Br, Bc, Dr, Dc, Jr, Jc;
    cin >> Br >> Bc;
    cin >> Dr >> Dc;
    cin >> Jr >> Jc;

    int bessie = max(abs(Br - Jr), abs(Bc - Jc));
    int daisy = abs(Dr - Jr) + abs(Dc - Jc);

    if (bessie < daisy)
        cout << "bessie";
    else if (bessie > daisy)
        cout << "daisy";
    else
        cout << "tie";
    return 0;
}
