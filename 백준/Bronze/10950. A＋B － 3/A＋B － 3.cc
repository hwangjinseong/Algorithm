#include <stdio.h>

int main() {
	int num, n1[100], n2[100];
	scanf("%d", &num);
	for(int i = 0; i < num; i++) {
		scanf("%d %d", &n1[i], &n2[i]);
	}
	for(int j = 0; j < num; j++) {
		printf("%d\n", n1[j]+n2[j]);
	}
}