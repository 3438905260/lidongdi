#include<stdio.h>
int main()
{
	int a[10] = { 86,29,58,10,78,20,14,100,33,66 };
	int i, j;
	int x;
	int temp;
	for (i = 0; i < 10 - 1; i++)
	{
		int max = a[0];
		int  x= 0;
		for (j = 0; j < 10 - i; j++)
		{
			if (a[j] > max)
			{
				max = a[j];
				x = j;
			}
		}
		if (x != 9 - i)
		{
			temp = a[x];
			a[x] = a[9 - i];
			a[9 - i] = temp;
		}
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	return 0;
}
