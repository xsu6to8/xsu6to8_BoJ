#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    cin >> n >> m;

    int six_min = 1001;
    int one_min = 1001;

    for (int i = 0; i < m; i++) {
        int six_temp, one_temp;
        cin >> six_temp >> one_temp;
        six_min = min(six_min, six_temp);
        one_min = min(one_min, one_temp);
    }

    int only_six = (n / 6 + 1) * six_min;  
    int only_one = n * one_min;            
    int mix = (n / 6) * six_min + (n % 6) * one_min; 

    cout << min({ only_six, only_one, mix });

    return 0;
}