#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<pair<int, int>> home;
vector<pair<int, int>> chicken;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        int temp_val;
        for (int j = 0; j < n; j++)
        {
            cin >> temp_val;
            if (temp_val == 1)
                home.push_back({ i,j });
            if (temp_val == 2)
                chicken.push_back({ i,j });
        }
    }

    vector<int> order;
    for (int i = 0; i < m; i++)
        order.push_back(0);
    for (int i = m; i < chicken.size(); i++)
        order.push_back(1);
    
    int result = INT_MAX;
    do
    {
        vector<pair<int, int>> avail_chicken;
        for (int i = 0; i < chicken.size(); i++)
        {
            if (order[i] == 0) 
                avail_chicken.push_back(chicken[i]);
        }

        int total_d = 0;
        for (int i = 0; i < home.size(); i++)
        {
            auto [home_x, home_y] = home[i];
            int curr_min = INT_MAX;
            for (int j = 0; j < m; j++)
            {
                int curr_d = abs(home_x - avail_chicken[j].first) + abs(home_y - avail_chicken[j].second);
                if (curr_d < curr_min)
                    curr_min = curr_d;
            }
            total_d += curr_min;
        }
        result = min(result, total_d);
    } while ( next_permutation( order.begin(), order.end() ) );

    cout << result;
}
