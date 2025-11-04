#include <bits/stdc++.h>
using namespace std;

int w, l;
int n;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> l >> w >> n;

    vector<int> w_v = { 0 }; 
    vector<int> l_v = { 0 }; 
    while (n--) {
        int t, num;
        cin >> t >> num;
        if (t == 0)
            w_v.push_back(num);
        else if (t == 1)
            l_v.push_back(num);
    }

    w_v.push_back(w); 
    l_v.push_back(l); 

    sort(w_v.begin(), w_v.end());
    sort(l_v.begin(), l_v.end());

    int w_max = -1;
    int l_max = -1;

    for (int i = 1; i < w_v.size(); i++) {
        int temp = w_v[i] - w_v[i - 1];
        if (temp >= w_max)
            w_max = temp;
    }

    for (int i = 1; i < l_v.size(); i++) {
        int temp = l_v[i] - l_v[i - 1];
        if (temp >= l_max)
            l_max = temp;
    }

    cout << w_max * l_max;
}
