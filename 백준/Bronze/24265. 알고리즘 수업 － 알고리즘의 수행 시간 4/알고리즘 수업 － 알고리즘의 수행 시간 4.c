#include <stdio.h>

int main()
{
    double n; // bc of 'input size'
    scanf("%lf", &n);

    printf("%.0lf\n2", n*(n-1)/2); // 1 + 2 + 3 + ... + (n-1)

    return 0;
}