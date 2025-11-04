#include <iostream>

#include <vector>

#include <algorithm>

#include <string>

using namespace std;

int getDigitSum(const string& s) {

    int sum = 0;

    for (char c : s) {

        if (isdigit(c)) sum += c - '0';

    }

    return sum;

}

bool compare(const string& a, const string& b) {

    if (a.length() != b.length()) return a.length() < b.length();

    

    int sumA = getDigitSum(a);

    int sumB = getDigitSum(b);

    if (sumA != sumB) return sumA < sumB;

    return a < b;

}

int main() {

    int N;

    cin >> N;

    vector<string> serials(N);

    for (int i = 0; i < N; ++i) {

        cin >> serials[i];

    }

    sort(serials.begin(), serials.end(), compare);

    for (const string& s : serials) {

        cout << s << '\n';

    }

    return 0;

}