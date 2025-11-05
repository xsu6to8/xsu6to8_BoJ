#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    for (int i = 0; i < N; ++i) {
        cout << "LoveisKoreaUniversity";
        if (i != N - 1) cout << " ";
    }
    cout << '\n';
    return 0;
}
