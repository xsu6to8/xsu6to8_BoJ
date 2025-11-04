#include <iostream>
#include <cmath>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int D, H, W;
    cin >> D >> H >> W;

    double scale = D / sqrt(H * H + W * W);

    int height = floor(H * scale);
    int width = floor(W * scale);

    cout << height << " " << width << '\n';

    return 0;
}
