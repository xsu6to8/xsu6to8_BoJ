#include <stdio.h>
#include <string.h>
#define num 1000001

int main(void){
    char str[num];
    int count = 0;
    scanf("%[^\n]s", str);

    char* ptr = strtok(str, " ");
    
    while (ptr != NULL){
        count ++;
        ptr = strtok(NULL, " ");
        
    }
    printf("%d", count);
}