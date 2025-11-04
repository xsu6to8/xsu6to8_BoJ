#include <bits/stdc++.h>
using namespace std;

int k;
int idx = 1;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> k;
    while (k--) {
        int student_n;
        cin >> student_n;
        
        vector<int> scores(student_n);

        for (int i = 0; i < student_n; i++)
            cin >> scores[i];

        sort(scores.begin(), scores.end());

        int gap = -1;
        for (int i = 1; i < student_n; i++)
        {
            int temp = scores[i] - scores[i - 1];
            if (temp >= gap)
                gap = temp;
        }

        cout << "Class " << idx++ << '\n';
        cout << "Max " << scores[student_n - 1] << ", Min " << scores[0] << ", Largest gap " << gap << '\n';
    }
}
