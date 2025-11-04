#include <iostream>
#include <string>
#include <stack>
#include <vector>
#include <unordered_set>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	string input;
	cin >> input;

	stack<char> st;
	int result = 0;
	int temp = 1;

	bool isVal = true;

	for (int i = 0; i < input.size(); i++)
	{		//		들어오는 항 하나씩 그냥 누적 계산합
		char c = input[i];

		if (c == '(') {
			st.push(c);
			temp *= 2;
		}
		else if (c == '[') {
			st.push(c);
			temp *= 3;
		}
		else if (c == ')') {
			if (st.empty() || st.top() != '(') {
				isVal = false;
				break;
			}
			if (input[i - 1] == '(') result += temp;
			st.pop();
			temp /= 2;
		}
		else if (c == ']') {
			if (st.empty() || st.top() != '[') {
				isVal = false;
				break;
			}
			if (input[i - 1] == '[') result += temp;
			st.pop();
			temp /= 3;
		}
	}

	if (!st.empty())
		isVal = false;


	cout << (isVal ? result : 0);
}