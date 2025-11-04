#include <iostream>
#include <vector>
#include <limits.h>

using namespace std;

int N;
vector<int> nums;
int op[4];
int maxValue = INT_MIN;
int minValue = INT_MAX;

void backtrack(int idx, int result) {
    if (idx == N) {
        maxValue = max(maxValue, result);
        minValue = min(minValue, result);
        return;
    }

    for (int i = 0; i < 4; i++) {
        if (op[i] > 0) {
            op[i]--;

            int newResult = result;
            if (i == 0) newResult += nums[idx];
            else if (i == 1) newResult -= nums[idx];
            else if (i == 2) newResult *= nums[idx];
            else if (i == 3) {
                if (newResult < 0) newResult = -(-newResult / nums[idx]);
                else newResult /= nums[idx];
            }

            backtrack(idx + 1, newResult);
            op[i]++;
        }
    }
}

int main() {
    cin >> N;
    nums.resize(N);

    for (int i = 0; i < N; i++) {
        cin >> nums[i];
    }
    for (int i = 0; i < 4; i++) {
        cin >> op[i];
    }

    backtrack(1, nums[0]);

    cout << maxValue << endl;
    cout << minValue << endl;

    return 0;
}
