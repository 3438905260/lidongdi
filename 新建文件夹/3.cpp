#include <stdio.h>
#include <ctype.h>

int main() {
	char sentence[50];
	printf("请输入一句英文：\n");
	fgets(sentence, 50, stdin);
	int i = 0;
	while (sentence[i] != '\0') {
		if (i == 0 || sentence[i - 1] == ' ') {
			sentence[i] = toupper(sentence[i]);
		}
		i++;
	}
	printf("转换后的句子为：%s\n", sentence);
	return 0;
}