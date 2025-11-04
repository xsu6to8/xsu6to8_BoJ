#include <iostream>
#include <string>
using namespace std;

int main() {
    int t; 
    cin >> t;

    while (t--) {
        string quiz;
        cin >> quiz;

        int score = 0;
        int current_score = 0;

        for (char c : quiz) {
            if (c == 'O') {
                current_score++; 
                score += current_score; 
            }
            else {
                current_score = 0; 
            }
        }

        cout << score << endl;
    }

    return 0;
}
