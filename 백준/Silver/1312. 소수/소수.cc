#include <iostream>
using namespace std;

int main() {
    int A, B, N;
    cin >> A >> B >> N;

    A %= B;
    for (int i = 1; i < N; ++i) {
        A *= 10;
        A %= B;
    }

    A *= 10;
    cout << A / B << endl;
}
