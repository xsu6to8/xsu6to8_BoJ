#include <iostream>

int main() {

    int result = 0;

    int temp;

    for(int i = 0; i < 5; i++) {

        std::cin >> temp;

        result += temp * temp;

    }

    result %= 10;

    std::cout << result;

    return 0;

}

