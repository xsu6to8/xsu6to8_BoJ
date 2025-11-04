#include <stdio.h>

int main()
{
    char words[5][16] = {0,};
    for(int k = 0; k < 5; k++){
        scanf("%s",words[k]);
    }
    for(int i = 0; i < 16; i++){
        for(int j = 0; j < 5; j++){
            if(words[j][i])printf("%c",words[j][i]);//이 부분만 바뀜
        }
    }
    return 0;
}