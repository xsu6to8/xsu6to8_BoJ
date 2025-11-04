#include <iostream>

#include <unordered_map>

#include <string>

using namespace std;

int main() {

    ios::sync_with_stdio(false);

    cin.tie(0);

    

    int t;

    cin >> t;

    

    while (t--) {

        unordered_map<string, int> clothes;

        int n;

        cin >> n;

        while (n--) {

            string name, type;

            cin >> name >> type;

            clothes[type]++;

        }

        int result = 1;

        for (auto& c : clothes)

            result *= (c.second + 1);

        

        cout << result - 1 << '\n';

    }

    return 0;

}