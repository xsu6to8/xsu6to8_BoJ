#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int calc(double dist) {
    if (dist <= 9)
        return 100;
    else if (dist <= 36)
        return 80;
    else if (dist <= 81)
        return 60;
    else if (dist <= 144)
        return 40;
    else if (dist <= 225)
        return 20;
    else 
        return 0;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        vector<pair<double, double>> p1(3);
        vector<pair<double, double>> p2(3);

        int p1_score = 0;
        int p2_score = 0;

        cin >> p1[0].first >> p1[0].second >> p1[1].first >> p1[1].second >> p1[2].first >> p1[2].second;
        cin >> p2[0].first >> p2[0].second >> p2[1].first >> p2[1].second >> p2[2].first >> p2[2].second;

        for (auto coord : p1) {
            double pow_dist = pow(coord.first, 2) + pow(coord.second, 2);
            p1_score += calc(pow_dist);
        }

        for (auto coord : p2) {
            double pow_dist = pow(coord.first, 2) + pow(coord.second, 2);
            p2_score += calc(pow_dist);
        }

        if (p1_score > p2_score)
            cout << "SCORE: " << p1_score << " to " << p2_score << ", PLAYER 1 WINS." << endl;
        else if (p1_score < p2_score)
            cout << "SCORE: " << p1_score << " to " << p2_score << ", PLAYER 2 WINS." << endl;
        else if (p1_score == p2_score)
            cout << "SCORE: " << p1_score << " to " << p2_score << ", TIE." << endl;
    }

    return 0;
}
