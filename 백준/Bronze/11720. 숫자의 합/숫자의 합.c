#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int n;
    int sum = 0;
    char s[101];

    scanf("%d", &n);
    scanf("%s", s);
    
    for (int i = 0; i < n; i++){
        sum += (s[i] - '0');  
    }
    printf("%d", sum);
    
}