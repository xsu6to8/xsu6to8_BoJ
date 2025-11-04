#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string str;
    cin >> str;

    stack<char> st;
    int result = 0;

    for (int i = 0; i < str.size(); ++i) {
        if (str[i] == '(') {
            st.push('(');
        } else { // ')'
            st.pop();
            if (str[i - 1] == '(')     
                result += st.size();
            else 
                //  한 조각 추가
                result += 1;

        }
    }

    cout << result;
    return 0;
}
