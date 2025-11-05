#include <stdio.h>
#include <math.h>

int main() {
    int n;
    scanf("%d", &n);

    printf("%d", 1 << n); // 1을 n비트 좌측 시프트 == n 승

    return 0;
}