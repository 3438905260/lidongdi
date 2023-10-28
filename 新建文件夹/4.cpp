#include<stdio.h>
int function(int a, int b, int c)
{
	int tem;
	a > b ? (a *= 10) : (b *= 10);
	a > c ? (a *= 10) : (c *= 10);
	b > c ? (b *= 10) : (c *= 10);
	tem = a + b + c;
	return tem;
}
int main()
{
	int a, b, c, d;
	while (1) {
		printf("请输入三个1-9的整数:\n");
		scanf_s("%1d%1d%1d", &a, &b, &c);
		d = function(a, b, c);
		printf("%d %d %d 三个数字能组成的最大三位数为%d\n", a, b, c, d);
	}
	return 0;
}