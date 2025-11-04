#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    vector<int> sequence(n);  
    for (int i = 0; i < n; i++) {
        cin >> sequence[i];
    }

    stack<int> st;
    vector<char> result; 
    int current = 1;     

    for (int i = 0; i < n; i++) {
        int target = sequence[i];

    	while (current <= target) {
            st.push(current);
            result.push_back('+');
            current++;
        }

        if (!st.empty() && st.top() == target) {
            st.pop();
            result.push_back('-');
        }
        else {
            cout << "NO\n"; 
            return 0;
        }
    }

    for (char op : result) {
        cout << op << '\n';
    }

    return 0;
}
