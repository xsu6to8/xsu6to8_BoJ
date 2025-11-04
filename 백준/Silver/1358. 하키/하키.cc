#include <iostream>
#include <cmath>

using namespace std;

int x_min, y_min;
int x_max, y_max;
int h; 

bool InSquare(int p_x, int p_y) {
    return (x_min <= p_x && p_x <= x_max && y_min <= p_y && p_y <= y_max);
}

bool InCircle(int p_x, int p_y, int c_x, int c_y, int r) {
    return (pow(p_x - c_x, 2) + pow(p_y - c_y, 2) <= pow(r, 2));
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int w, p;
    cin >> w >> h >> x_min >> y_min >> p;  // r = H / 2

    x_max = x_min + w;
    y_max = y_min + h;

    int r = h / 2; 
    int c1_x = x_min, c1_y = y_min + r; 
    int c2_x = x_max, c2_y = y_min + r; 

    int cnt = 0;
    while (p--) {
        int p_x, p_y;
        cin >> p_x >> p_y;

        if (InSquare(p_x, p_y) || InCircle(p_x, p_y, c1_x, c1_y, r) || InCircle(p_x, p_y, c2_x, c2_y, r)) {
            cnt++;
        }
    }

    cout << cnt;

    return 0;
}
