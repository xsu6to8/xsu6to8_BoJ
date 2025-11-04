#include <stdio.h>
#include <string.h>

int main(){
    int t;
    scanf("%d", &t);

    for(int i = 0; i < t; i++){
        char str[1001];
        scanf("%s", str);
        printf("%c%c\n", str[0], str[strlen(str) - 1]);
    }
    return 0;
}