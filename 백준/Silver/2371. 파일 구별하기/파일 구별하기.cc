#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<vector<int>> files(N);
    for (int i = 0; i < N; ++i) {
        int x;
        while (cin >> x && x != -1) {
            files[i].push_back(x);
        }
    }
    int maxLen = 0;
    for (auto &file : files)
        maxLen = max(maxLen, (int)file.size());

    for (int k = 1; k <= maxLen; ++k) {
        set<vector<int>> s;
        for (auto &file : files) {
            vector<int> temp = file;
            while ((int)temp.size() < k)
                temp.push_back(0);
            temp.resize(k);
            s.insert(temp);
        }
        if ((int)s.size() == N) {
            cout << k << endl;
            break;
        }
    }

    return 0;
}
