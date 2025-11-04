#include <stdio.h>
#include <stdlib.h>

int main(){
    int* n;
    int m, len;

    scanf("%d %d", &len, &m);

    n = (int*) calloc(len, sizeof(int));

    for (int count = 0; count < m; count++)
    {
        int i, j, k;
        scanf("%d %d %d", &i, &j, &k);
        for (int put = i-1; put <= j-1; put++)
            n[put] = k;
    }
    for (int i = 0; i < len; i++)
        printf("%d ",n[i]);
    
    free(n);
    return 0;
}