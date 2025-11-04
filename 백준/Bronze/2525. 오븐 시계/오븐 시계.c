#include <stdio.h>

int main()
{
    int hr, min, time;

    scanf("%d %d", &hr, &min);
    scanf("%d", &time);

    min += time;

    if (min >= 60)
    {
        hr += min / 60;
        if (hr >= 24)
            hr = hr % 24;
        min = min % 60;
    }
    
    printf("%d %d", hr, min);

    return 0;    
}