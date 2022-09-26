#include <stdio.h>

int main() {
	int num[30] = { 0 };
	int nll = 0;
	for (int i = 0; i < 28; i++) {
		scanf("%d", &nll);
		num[nll - 1] = 1;
	}
	for (int j = 0; j < 30; j++) {
		if (num[j] == 0) {
			printf("%d\n", j + 1);
		}
	}
}