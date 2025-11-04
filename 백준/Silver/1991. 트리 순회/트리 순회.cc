#include <iostream>

#include <unordered_map>

using namespace std;

unordered_map<char, pair<char, char>> tree;

void preorder(char node) {

    if (node == '.') return;

    cout << node;

    preorder(tree[node].first);

    preorder(tree[node].second);

}

void inorder(char node) {

    if (node == '.') return;

    inorder(tree[node].first);

    cout << node;

    inorder(tree[node].second);

}

void postorder(char node) {

    if (node == '.') return;

    postorder(tree[node].first);

    postorder(tree[node].second);

    cout << node;

}

int main() {

    int n;

    cin >> n;

    for (int i = 0; i < n; i++) {

        char p, l, r;

        cin >> p >> l >> r;

        tree[p] = {l, r};

    }

    preorder('A');

    cout << '\n';

    inorder('A');

    cout << '\n';

    postorder('A');

    cout << '\n';

    return 0;

}