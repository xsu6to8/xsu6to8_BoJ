#include <stdio.h>
#define MAX_SIZE 100000

int main(void)
{
    int N;
    scanf("%d", &N);

    int dsType[MAX_SIZE];
    int inputValue[MAX_SIZE];

    for (int i = 0; i < N; i++)
        scanf("%d", &dsType[i]);
    
    for (int i = 0; i < N; i++)
        scanf("%d", &inputValue[i]);

    int M;
    scanf("%d", &M);

    for (int i = N - 1; M != 0 && i >= 0; i--){
        if (dsType[i] == 0){
            printf("%d ", inputValue[i]);
            M--;
        }
    }

    for (; M != 0; M--) {
        int append_element;
        scanf("%d", &append_element);
        printf("%d ", append_element);
    }
}