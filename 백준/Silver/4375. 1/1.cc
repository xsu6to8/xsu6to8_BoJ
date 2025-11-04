#include <iostream>
using namespace std;

int find_multiple_of_ones(int n) {
    int current_remainder = 1 % n; 
    int length = 1;

    while (current_remainder != 0) {
        current_remainder = (current_remainder * 10 + 1) % n; 
        length++;
    }

    return length;
}

int main() {
    int n;
    while (cin >> n) {
        cout << find_multiple_of_ones(n) << endl;
    }
    return 0;
}