#include<stdio.h>
int main() {
	int j, a[10101];//nΪ����ֵ��jΪ������Ч���ȣ�kΪ����λ�� 
	scanf_s("%d", &j);
	for (int i = 0; i < j; i++) {
		scanf_s("%d", &a[i]);
	}
	int k,n;
	scanf_s("%d %d", &k, &n);
	a[k - 1] = n;//�Ե�k��Ԫ��ֱ�Ӹ�ֵ 
	for (int i = 0; i < j; i++) {
		printf("%d ", a[i]);
	}
	return 0;
}
