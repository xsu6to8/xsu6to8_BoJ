#include <iostream>
#include <algorithm>
#include <vector>
#include <math.h>
using namespace std;
 
double answer(int x1, int y1, int x2, int y2, int x3, int y3) {
    if ((x1 - x2) * (y1 - y3) == (x1 - x3) * (y1 - y2)) {
        return -1;
    }
    else {
        vector<double> distance;
 
        double distance12 = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
        double distance23 = sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3));
        double distance13 = sqrt((x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3));
 
        distance.push_back(distance12);
        distance.push_back(distance13);
        distance.push_back(distance23);
 
        sort(distance.begin(), distance.end());
        double maxdis = distance[2];
        double mindis = distance[0];
 
        return 2 * (maxdis) - 2 * (mindis);
    }
}
 
int main() {
    int x1, y1;
    int x2, y2;
    int x3, y3;
    cout << fixed;
    cout.precision(16);
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    cout << answer(x1, y1, x2, y2, x3, y3);
}
