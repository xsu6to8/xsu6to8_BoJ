#include <iostream>

using namespace std;

long long cnt = -1;

class Node
{
public:
	long long data;
	Node* leftChild = NULL;
	Node* rightChild = NULL;
	long long height;

	Node(long long _data, long long _height)
		:data(_data), height(_height) {}
};

void DFS(Node* n, long long goal) {
	if (n->data < goal) {
		Node* temp_left = new Node(n->data * 2, n->height + 1);
		n->leftChild = temp_left;

		Node* temp_right = new Node(n->data * 10 + 1, n->height + 1);
		n->rightChild = temp_right;

		DFS(n->leftChild, goal);
		DFS(n->rightChild, goal);

		delete temp_left;
		delete temp_right;
	}
	else if (n->data == goal)
		cnt = n->height;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long long a, b;
	cin >> a >> b;

	Node root(a, 1);
	DFS(&root, b);

	cout << cnt;

	return 0;
}
