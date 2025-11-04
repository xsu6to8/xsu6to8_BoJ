// q_2805
// binary search

#include <iostream>
#include <algorithm>

using namespace std;

typedef long long ll;

int N;
ll M;
ll wood[1000000];

bool isPossible(ll height)
{
    ll sum = 0;
    for ( int i = 0; i < N; i++ )
    {
        if ( wood[i] > height )
            sum += wood[i] - height;
    }
    return sum >= M;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> N >> M;
    ll max_height = 0;
    for ( int i = 0; i < N; i++ )
    {
        cin >> wood[i];
        max_height = max(max_height, wood[i]);
    }

    ll left = 0, right = max_height;
    ll answer = 0;

    while ( left <= right )
    {
        ll mid = (left + right) / 2;
        if ( isPossible(mid) )
        {
            answer = mid;
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    cout << answer;
    return 0;
}
