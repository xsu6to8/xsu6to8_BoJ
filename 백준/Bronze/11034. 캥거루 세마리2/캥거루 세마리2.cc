#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int A, B, C;
    while (cin >> A >> B >> C) {
        cout << max(B - A, C - B) - 1 << '\n';
    }

    return 0;
}

// 스마트한 풀이 -> 수학적으로 접근. 최대 점프수는 (사이 간격 - 1)