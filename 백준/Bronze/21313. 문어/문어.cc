#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    for (int i = 0; i < n - 1; i++) {
        cout << (i % 2 + 1) << " ";
    }
    
    cout << ((n % 2 == 0) ? 2 : 3) << "\n";
}

// 홀 || 짝에 1, 2 부여 & 마지막은 2 || 3