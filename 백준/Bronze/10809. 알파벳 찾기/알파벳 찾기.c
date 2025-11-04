#include <stdio.h>
#include <string.h>

int main() {
	char a[101] = { 0 };
	int b[26] = { -1 };
	int count = 0;
	char* phr;

	scanf("%s", a);
	for (int j = 97; j <= 122; j++){
			phr = strchr(a, j);
			if (phr==NULL)
				b[j - 97] = -1;
			else
				b[j - 97] = phr-a;
	}
	
	for (int i = 0; i <=25; i++)
	{
			printf("%d ", b[i]);
	}

	return 0;
}