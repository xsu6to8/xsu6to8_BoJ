#include <iostream>
#include <string>
#include <vector>
#include <unordered_set>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    unordered_set<char> vowelSet = {'a', 'e', 'i', 'o', 'u'};
    string str;
    
    while (true) {
        cin >> str;
        if (str == "end")
            break;
        
        bool step1 = false;
        for (char c : str) {
            if (vowelSet.find(c) != vowelSet.end()) {
                step1 = true;
                break;
            }
        }
        
        if (!step1) {
            cout << "<" << str << "> is not acceptable." << endl;
            continue;
        }
        
        bool step2 = false;
        int vowelCount = 0;
        int consonantCount = 0;
        for (char c : str) {
            if (vowelSet.find(c) != vowelSet.end()) {
                vowelCount++;
                consonantCount = 0;
            } else {
                consonantCount++;
                vowelCount = 0;
            }
            
            if (vowelCount >= 3 || consonantCount >= 3) {
                step2 = true;
                break;
            }
        }
        
        if (step2) {
            cout << "<" << str << "> is not acceptable." << endl;
            continue;
        }
        
        bool step3 = false;
        for (size_t i = 0; i < str.length() - 1; i++) {
            if (str[i] == str[i + 1]) {
                if (str[i] != 'e' && str[i] != 'o') {
                    step3 = true;
                    break;
                }
            }
        }
        
        if (step3) {
            cout << "<" << str << "> is not acceptable." << endl;
            continue;
        }
        
        cout << "<" << str << "> is acceptable." << endl;
    }
    
    return 0;
}