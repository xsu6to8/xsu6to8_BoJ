#include <stdio.h>

int main()
{
    int h, m;
    scanf("%d %d",&h, &m);

    if (m < 45)
    {
        if (h == 0)
        {        
            h = 23;
            m = 60 - (45 - m);
        }
        else
        {
            h -= 1;
            m = 60 - (45 - m);
        }
    }
    
    else if (m >= 45)
        m -= 45;
    
    printf("%d %d", h, m);

    return 0;
}