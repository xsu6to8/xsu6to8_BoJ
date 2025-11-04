#include <iostream>

int main()
{
    int T;
    std::cin >> T;

    while ( T-- )
    {
        int N, M;
        std::cin >> N >> M;

        int a, b;
        while ( M-- )
        {
            std::cin >> a >> b;
        }

        std::cout << N - 1 << std::endl;
    }
    return 0;
}