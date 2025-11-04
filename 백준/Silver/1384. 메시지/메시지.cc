#include <iostream>
using namespace std;

string kid[21][21]; 
int kidNum[21] = {0};

void print(int n, bool &isN) {
	for (int i = 0; i < n; i++) {
		for (int j = 1; j < n; j++) {
			if (kid[i][j] == "N") {
				isN = true;

				int k = kidNum[j];
				if (i != 0)
					k = kidNum[(j - i + n) % n];

				printf("%s was nasty about %s\n", kid[k][0].c_str(), kid[i][0].c_str());
			}
		}
	}
}

int main() {
	int group = 1; 

	while (true) {
		int n;
		cin >> n;

		if (n == 0) break;

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cin >> kid[i][j];

				if (i != 0)
					kidNum[i] = n - i;
			}
		}

		bool isN = false; 

		printf("Group %d\n", group++);

		print(n, isN);

		if (isN == false) 
			printf("Nobody was nasty\n");

		printf("\n");
	}

}