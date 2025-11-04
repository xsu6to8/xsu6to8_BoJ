#include <stdio.h>

int main()
{
    int dice[3], count = 1, num, max = 0, price = 0;
    scanf("%d %d %d", &dice[0], &dice[1], &dice[2]);

    for (int i = 0; i < 3; i++){
        if(count == 3)
                break;
        if(dice[i] > max)
            max = dice[i];

        for (int j = i+1; j < 3; j++){
            if (dice[i] == dice[j]){
                num = dice[i];
                count += 1;
            }
        }
    }

    if(count == 3)
        printf("%d", price = 10000 + num*1000);
        
    else if(count == 2)
        printf("%d", price = 1000 + num*100);
        
    else if(count == 1)
        printf("%d", price = max*100);

    return 0;
}