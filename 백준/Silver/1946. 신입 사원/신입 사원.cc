#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    
    for (auto i = 0; i < t; i++)
    {
        int n;
        cin >> n;

        vector<pair<int, int>> applicants(n);

        for (int i = 0; i < n; i++) {
            cin >> applicants[i].first >> applicants[i].second;
        }

        sort(applicants.begin(), applicants.end());

        int passed = 1;
        int min_interview_rank = applicants[0].second;

        for (int i = 1; i < n; i++) {
            if (applicants[i].second < min_interview_rank) {
                passed++;
                min_interview_rank = applicants[i].second; 
            }
        }

        cout << passed << endl;
    }

    return 0;
}