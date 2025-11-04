#include <stdio.h>
#include <stdlib.h>

int main(){
    int* n;
    int m, len;

    scanf("%d %d", &len, &m);

    n = (int*) calloc(len, sizeof(int));
    for (int i = 0; i < len; i++)
        n[i] = i + 1;

    for (int change = 0; change < m; change++)
    {
        int i, j, temp;
        scanf("%d %d", &i, &j);
        temp = n[i-1];
        n[i-1] = n[j-1];
        n[j-1] = temp;
    }
    
    for (int i = 0; i < len; i++)
        printf("%d ",n[i]);
    
    free(n);
    return 0;
}