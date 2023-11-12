#include<stdio.h>
void increase(int*a, int n, int j, int k) {//n为插入值，j为数组有效长度，k为插入位置 

	for (int i = j - 1; i >= k - 1; i--) { 
		a[i + 1] = a[i];
	}
	a[k - 1] = n;
}
int main() {
	int j, a[10101];
	scanf_s("%d", &j);
	for (int i = 0; i < j; i++) {
		scanf_s("%d", &a[i]);
	}
	int k, n;
	scanf_s("%d %d", &k, &n);
	increase(a, n, j, k);
	for (int i = 0; i < j + 1; i++) {
		printf("%d ", a[i]);
	}
	return 0;
}
