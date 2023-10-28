#include<stdio.h>
int main()
{
	int a, b;
	int t;
	scanf_s("%d %d", &a, &b);
	while (b != 0) {
		t = a % b;
		a = b;
		b = t;
	}
	printf("gcd=%d\n", a);
	return 0;
}