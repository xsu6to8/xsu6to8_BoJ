#include <iostream>

#include <map>

#include <string>

using namespace std;

int main() {

    int N;

    cin >> N;

    map<string, int> bookCount;

    string title;

    for (int i = 0; i < N; ++i) {

        cin >> title;

        bookCount[title]++;

    }

    string bestSeller;

    int maxCount = 0;

    for (const auto& pair : bookCount) {

        if (pair.second > maxCount) {

            maxCount = pair.second;

            bestSeller = pair.first;

        }

    }

    cout << bestSeller << endl;

    return 0;

}

