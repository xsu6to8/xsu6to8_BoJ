#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M;
    cin >> N >> M;

    int J;
    cin >> J;

    int left = 1;       
    int right = M;       
    int result = 0;

    for (int i = 0; i < J; ++i) {
        int apple;
        cin >> apple;

        if (apple < left) {
            int move = left - apple;
            result += move;
            left -= move;
            right -= move;
        }
        else if (apple > right) {
            int move = apple - right;
            result += move;
            left += move;
            right += move;
        }
    }

    cout << result << '\n';
    return 0;
}
