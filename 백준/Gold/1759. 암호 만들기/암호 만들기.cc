#include <bits/stdc++.h>
using namespace std;

int l, c;
char alphabets[16];
set<char> vowel = { 'a','e','i','o','u' };

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> l >> c;
    for (int i = 0; i < c; i++) cin >> alphabets[i];
    sort(alphabets, alphabets + c);

    vector<int> orders;
    for (int i = 0; i < l; i++)
        orders.push_back(0);
    for (int i = l; i < c; i++)
        orders.push_back(1);

    do {
        string s;
        int vowel_cnt = 0;
        for (int i = 0; i < c; i++) { 
            if (orders[i] == 0) {
                s += alphabets[i];
                if (vowel.count(alphabets[i])) 
                    vowel_cnt++;
            }
        }
        int consonant_cnt = l - vowel_cnt;
        if (vowel_cnt >= 1 && consonant_cnt >= 2)
            cout << s << "\n";
    } while (next_permutation(orders.begin(), orders.end()));
}
