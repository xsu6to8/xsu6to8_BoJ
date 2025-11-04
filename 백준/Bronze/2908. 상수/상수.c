#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void){
    char s1[4], s2[4];
    scanf("%s %s", s1, s2);

    char temp;

    temp = s1[0];
    s1[0] = s1[2];
    s1[2] = temp;

    temp = s2[0];
    s2[0] = s2[2];
    s2[2] = temp;

    if(strcmp(s1, s2) > 0)
        printf("%s", s1);
    else
        printf("%s", s2);    
}