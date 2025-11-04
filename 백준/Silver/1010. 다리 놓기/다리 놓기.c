#include <stdio.h>

void print_int128(__int128_t n) {
    if (n == 0) {
        printf("0");
        return;
    }
    
    if (n < 0) {
        printf("-");
        n = -n;
    }

    char buffer[40];  // 128비트 정수를 담을 충분한 크기의 버퍼
    int i = 0;
    
    while (n > 0) {
        buffer[i++] = '0' + (n % 10);
        n /= 10;
    }
    
    while (i--) {
        putchar(buffer[i]);
    }
}

int main () {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        int n, m;
        scanf("%d %d", &n, &m); 

        __int128_t numerator = 1;
        __int128_t denominator = 1;

        for (__int128_t j = 1; j <= n; j++) {
            numerator *= m--;
            denominator *= j; 
        }

        __int128_t result = numerator / denominator;
        print_int128(result);
        printf("\n");
    }
    
    return 0;
}
