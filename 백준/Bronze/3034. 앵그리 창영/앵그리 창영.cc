#include <iostream>
#include <cmath>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, w, h;
    cin >> n >> w >> h;

    int max = sqrt(pow(w, 2) + pow(h, 2));
    while (n--) {
        int temp; 
        cin >> temp;
        if (temp <= max)
            cout << "DA" << endl;
        else
            cout << "NE" << endl;
    }

    return 0;
}
