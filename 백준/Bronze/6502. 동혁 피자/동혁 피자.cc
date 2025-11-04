#include <iostream>
#include <cmath>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double r, w, l;
    int idx = 1;
    while (cin >> r) {
        if (r == 0)
            break;

        cin >> w >> l;
        double diagonal = pow(w / 2, 2) + pow(l / 2, 2);

        if (pow(r, 2) >= diagonal)
            cout << "Pizza " << idx++ << " fits on the table." << endl;
        else
            cout << "Pizza " << idx++ << " does not fit on the table." << endl;
    }
   
    return 0;
}
