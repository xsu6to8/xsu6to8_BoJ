#include <stdio.h>
#include <stdlib.h>

int main(){
    int* n;
    int len;
    int v;
    int count = 0;

    scanf("%d", &len);
    n = (int*) malloc(len * sizeof(int));

    for(int i = 0; i < len; i++)
        scanf("%d", &n[i]);
    
    scanf("%d", &v);

    for (int i = 0; i < len; i++)
    {
        if(v == n[i])
            count ++;
    }
    
    printf("%d", count);

    return 0;
}
