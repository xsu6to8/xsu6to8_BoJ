#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int R, C;

    std::cin >> R;
    std::cin >> C;


    for (int i = 0; i < R; ++i) {
        for (int j = 0; j < C; ++j) {
            std::cout << '*';
        }
        std::cout << '\n';
    }

}