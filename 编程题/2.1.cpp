#include<stdio.h>
void deleted(int*a, int k, int j) {//j为数组有效长度，k为插入位置
	for (int i = k - 1; i < j - 1; i++) {
		a[i] = a[i + 1];
	}
}
int main() {
	int j, a[10101]; 
	scanf_s("%d", &j);
	for (int i = 0; i < j; i++) {
		scanf_s("%d", &a[i]);
	}
	int k;
	scanf_s("%d", &k);
	deleted(a, k, j);
	for (int i = 0; i < j - 1; i++) {
		printf("%d ", a[i]);
	}
	return 0;
}
