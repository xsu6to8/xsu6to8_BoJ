#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M;
    cin >> N >> M;

    vector<int> arr(N);
    vector<int> remCount(M, 0);

    long long prefixSum = 0, result = 0;

    for (int i = 0; i < N; i++) {
        cin >> arr[i];
        prefixSum += arr[i];  
        int remainder = prefixSum % M;  

        if (remainder == 0)  
            result++;  

        remCount[(remainder + M) % M]++;  
    }

    for (int r = 0; r < M; r++) {
        if (remCount[r] > 1) {
            result += (1LL * remCount[r] * (remCount[r] - 1)) / 2;
        }
    }

    cout << result << '\n';

    return 0;
}
