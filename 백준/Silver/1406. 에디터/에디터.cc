#include <iostream>
#include <list>
#include <string>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	string s;
	cin >> s;
	list<char> cl;
	for (auto c : s)
		cl.push_back(c);

	int m;
	cin >> m;
	list<char>::iterator t = cl.end();
	while (m--)
	{
		char cmd, arg;
		cin >> cmd;

		if (cmd == 'L') {
			if (t != cl.begin())
				--t;
		}
		else if (cmd == 'D') {
			if (t != cl.end())
				++t;
		}
		else if (cmd == 'B') {
			if (t != cl.begin()) {
				t = cl.erase(--t); 
			}
		}
		else if (cmd == 'P') {
			cin >> arg;
			cl.insert(t, arg);  
		}
	}

	for (char c : cl)
		cout << c;

	return 0;
}