#include <stdio.h>

int main(void)
{
	int a[9][9], k, i, max, order1, order2;
	max = -1; 

	for ( i = 0; i < 9; i++)
	{
		for ( k = 0; k < 9; k++)
		{
			scanf("%d", &a[i][k]);

			if (max<a[i][k])
			{
				max = a[i][k];
				order1 = i;
				order2 = k;
			}
		}
		

	}
	
	printf("%d\n%d %d", max, order1+1, order2+1);

	return 0;
}