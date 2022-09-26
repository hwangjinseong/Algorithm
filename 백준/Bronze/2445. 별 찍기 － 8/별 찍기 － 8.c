#include <stdio.h>
int main() { 
	int num;
	scanf("%d", &num);
	for (int i = 1; i <= num; i++) {
		for (int j = i; j > 0; j--) {
			printf("*");
		}
		for (int k = 2*num-2*i; k > 0; k--) {
			printf(" ");
		}
		for (int l = i; l > 0; l--) {
			printf("*");
		}
		printf("\n");
	}
	for (int i = num - 1; i > 0; i--) {
		for (int j = i; j > 0; j--) {
			printf("*");
		}
		for (int k = 2 * num - 2 * i; k > 0; k--) {
			printf(" ");
		}
		for (int l = i; l > 0; l--) {
			printf("*");
		}
		printf("\n");
	}
}