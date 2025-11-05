#include <iostream>
#include <vector>
#include <string>

using namespace std;

int n;

void recursive(int rep) {
	if (rep > n)
		return;
	
	string dash = "";
	for (int i = 0; i < rep; i++)
		dash += "____"; // underbar
	
	string s1 = "\"재귀함수가 뭔가요?\"";
	string s2 = "\"잘 들어보게. 옛날옛날 한 산 꼭대기에 이세상 모든 지식을 통달한 선인이 있었어.";
	string s3 = "마을 사람들은 모두 그 선인에게 수많은 질문을 했고, 모두 지혜롭게 대답해 주었지.";
	string s4 = "그의 답은 대부분 옳았다고 하네. 그런데 어느 날, 그 선인에게 한 선비가 찾아와서 물었어.\"";
	string base = "\"재귀함수는 자기 자신을 호출하는 함수라네\"";
	string end = "라고 답변하였지.";

	cout << dash + s1 << endl;

	if (rep == n) {
		cout << dash + base << endl;
		cout << dash + end << endl;
		return;
	}

	cout << dash + s2 << endl;
	cout << dash + s3 << endl;
	cout << dash + s4 << endl;

	recursive(rep + 1);

	cout << dash + end << endl;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n;

	cout << "어느 한 컴퓨터공학과 학생이 유명한 교수님을 찾아가 물었다." << endl;
	recursive(0);

	return 0;
}
