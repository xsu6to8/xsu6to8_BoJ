#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int max_final_score = 0;

    for (int i = 0; i < n; ++i) {
        int run1, run2;
        cin >> run1 >> run2;

        vector<int> tricks(5);
        for (int j = 0; j < 5; ++j) {
            cin >> tricks[j];
        }

        int best_run_score = max(run1, run2);

        sort(tricks.begin(), tricks.end(), greater<int>());
        int best_two_tricks_score = tricks[0] + tricks[1];

        int current_final_score = best_run_score + best_two_tricks_score;

        if (current_final_score > max_final_score) {
            max_final_score = current_final_score;
        }
    }

    cout << max_final_score << endl;

}