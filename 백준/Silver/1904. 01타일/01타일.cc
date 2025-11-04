// q_1904
// DP --> fib

#include <iostream>
#include <vector>

using namespace std;

int N;
vector<long long> answer;

void Tiles()
{
    answer.resize(N + 1);
    answer[0] = 0;
    answer[1] = 1;
    answer[2] = 2;

    for ( int i = 3; i <= N; i++ )
    {
        answer[i] = (answer[i - 1] + answer[i - 2]) % 15746;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;

    if ( N == 1 )
    {
        cout << 1 << "\n";
        return 0;
    }
    else if ( N == 2 )
    {
        cout << 2 << "\n";
        return 0;
    }

    Tiles();
    cout << answer[N] << "\n";

    return 0;
}
