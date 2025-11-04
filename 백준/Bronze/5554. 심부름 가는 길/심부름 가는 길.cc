#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int time1, time2, time3, time4;

    std::cin >> time1;
    std::cin >> time2;
    std::cin >> time3;
    std::cin >> time4;

    int total_seconds = time1 + time2 + time3 + time4;

    int minutes = total_seconds / 60; 
    int seconds = total_seconds % 60; 

    std::cout << minutes << '\n';
    std::cout << seconds << '\n';
}