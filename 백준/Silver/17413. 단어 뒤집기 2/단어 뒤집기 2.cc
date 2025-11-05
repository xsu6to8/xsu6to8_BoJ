#include <iostream>

#include <stack>

#include <string>

using namespace std;

int main() {

    string s;

    getline(cin, s);

    stack<char> stk;

    bool in_tag = false;

    for (char c : s) {

        if (c == '<') {

            while (!stk.empty()) {

                cout << stk.top();

                stk.pop();

            }

            in_tag = true;

            cout << c;

        } else if (c == '>') {

            in_tag = false;

            cout << c;

        } else if (in_tag) {

            cout << c;

        } else {

            if (c == ' ') {

                while (!stk.empty()) {

                    cout << stk.top();

                    stk.pop();

                }

                cout << c;

            } else {

                stk.push(c);

            }

        }

    }

    while (!stk.empty()) {

        cout << stk.top();

        stk.pop();

    }

    return 0;

}