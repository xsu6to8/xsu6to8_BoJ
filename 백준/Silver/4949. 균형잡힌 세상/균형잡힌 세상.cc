#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	string sentences;
	while (true)
	{
		getline(cin, sentences);
		if (sentences.size() == 1 && sentences[0] == '.'){
			break;
		}

		bool balanced = true;
		stack<char> st;
		for (auto c : sentences){
			if (c == '('){
				st.push(c);
			}
			if (c == ')'){
				if (!st.empty() && st.top() == '(')
					st.pop();
				else{
					balanced = false;
					break;
				}
			}
			if (c == '['){
				st.push(c);
			}
			if (c == ']'){
				if (!st.empty() && st.top() == '[')
					st.pop();
				else{
					balanced = false;
					break;
				}
			}

		}

		if (!st.empty())
			balanced = false;

		if (balanced)
			cout << "yes" << '\n';
		else
			cout << "no" << '\n';
	}

}