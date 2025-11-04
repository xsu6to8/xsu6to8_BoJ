#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int C;
    cin >> C;
    while (C--) {
        int N;
        cin >> N;
        int score[1000];
        double sum = 0;
        for (int i = 0; i < N; ++i) {
            cin >> score[i];
            sum += score[i];
        }
        double avg = sum / N;
        int cnt = 0;
        for (int i = 0; i < N; ++i) {
            if (score[i] > avg) cnt++;
        }
        cout << fixed << setprecision(3) << ((double)cnt / N * 100) << "%" << endl;
    }
    return 0;
}
