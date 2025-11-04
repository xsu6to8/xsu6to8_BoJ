#include <stdio.h>
#include <string.h>

int main(){
    int num;
    scanf("%d", &num);

    for (int i = 0; i < num; i++){
        int recur;
        char str[21];
        scanf("%d %s", &recur, str);

        for (int j = 0; j < strlen(str); j++){
            for (int k = 0; k < recur; k++)
                printf("%c", str[j]);
        }
        puts("");
    }
    
}