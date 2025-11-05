#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    vector<int> heightList(N);
    for (int i = 0; i < N; ++i)
        cin >> heightList[i];

    long long fbLength = 0; // 앞뒤 넓이
    for (int i = 0; i < N; ++i) 
        fbLength += heightList[i];
    fbLength *= 2;

    long long tbLength = N * 2; // 위아래 넓이
    long long lrLength = heightList[0] + heightList[N - 1]; // 왼쪽, 오른쪽 넓이

    long long reLength = 0; // 인접 막대 사이 높이 차
    for (int i = 0; i < N - 1; ++i) 
        reLength += abs(heightList[i] - heightList[i + 1]);

    cout << (fbLength + tbLength + lrLength + reLength);

    return 0;
}
