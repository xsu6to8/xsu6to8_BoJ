#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string nickname;
    cin >> nickname;

    unordered_map<char, int> freq;
    for (char c : nickname) {
        freq[c]++;
    }

    string half = "";  
    char middle = 0; 
    int odd_count = 0;  

    for (auto& entry : freq) {
        if (entry.second % 2 == 1) {
            odd_count++;
            middle = entry.first;  
        }

        if (odd_count > 1) {
            cout << "I'm Sorry Hansoo\n";
            return 0;
        }

        for (int i = 0; i < entry.second / 2; ++i)
            half += entry.first;
    }

    sort(half.begin(), half.end());

    string result = half;
    if (middle) result += middle;
    reverse(half.begin(), half.end());
    result += half;

    cout << result;

    return 0;
}