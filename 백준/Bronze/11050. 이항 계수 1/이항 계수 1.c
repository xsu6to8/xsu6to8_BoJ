#include <stdio.h>

int main () {
    int n, k;
    scanf("%d %d", &n, &k);

    int numerator = 1;
    int denominator = 1;

    for (int i = 1; i <= k; i++) {
        numerator *= n--;
        denominator *= i; 
    }

    printf("%d", numerator / denominator);
    
    return 0;
}