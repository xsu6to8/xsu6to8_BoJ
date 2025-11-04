#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++){
        int j = 1 ;
        while (j <= i){
            printf("*");
            j++;
        }
        printf("\n");
    }
    return 0;
}