#include <iostream>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<set<int>> faces = {
        {0, 1, 4, 5}, 
        {2, 3, 6, 7}, 
        {0, 1, 2, 3}, 
        {4, 5, 6, 7}, 
        {0, 2, 4, 6}, 
        {1, 3, 5, 7}  
    };

    int T;
    cin >> T;

    while (T--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        set<int> input = { a, b, c, d };
        bool isFace = false;

        for (const auto& face : faces) {
            if (input == face) {
                isFace = true;
                break;
            }
        }

        cout << (isFace ? "YES" : "NO") << '\n';
    }

    return 0;
}
