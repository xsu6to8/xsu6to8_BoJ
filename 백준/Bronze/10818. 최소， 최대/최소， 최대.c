#include <stdio.h>
#include <stdlib.h>

int main(){
    int* arr;
    int n;
    int max = -1000000;
    int min = 1000000;

    scanf("%d", &n);

    arr = (int*) malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (int i = 0; i < n; i++){
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }
    
    printf("%d %d", min, max);

    free(arr);
    return 0;
}