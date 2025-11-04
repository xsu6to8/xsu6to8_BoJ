#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> notes(8);

    for (int i = 0; i < 8; i++) 
        cin >> notes[i];

    if (notes == vector<int>{1, 2, 3, 4, 5, 6, 7, 8}) 
        cout << "ascending" << endl;

    else if (notes == vector<int>{8, 7, 6, 5, 4, 3, 2, 1}) 
        cout << "descending" << endl;

    else 
        cout << "mixed" << endl;

    return 0;
}
