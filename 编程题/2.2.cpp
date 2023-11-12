#include<stdio.h>
int main() {
	int j, a[10101];//n为插入值，j为数组有效长度，k为插入位置 
	scanf_s("%d", &j);
	for (int i = 0; i < j; i++) {
		scanf_s("%d", &a[i]);
	}
	int k,n;
	scanf_s("%d %d", &k, &n);
	a[k - 1] = n;//对第k个元素直接赋值 
	for (int i = 0; i < j; i++) {
		printf("%d ", a[i]);
	}
	return 0;
}
