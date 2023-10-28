#include<stdio.h>

int main(void) {
	int ascii;
	printf("请输入一个ASCII码值：");
	scanf_s("%d", &ascii);
	printf("ASCII码值为 %d 对应的字符为 %c", ascii, ascii);

	return 0;
}
