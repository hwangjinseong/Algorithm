#include <stdio.h>
#include <string.h>

int main() {
	int a, b;
	char p[20];
	scanf("%d", &a);
	for (int i = 0; i < a; i++) {
		scanf("%d %s", &b, p);
		for (int j = 0; j < strlen(p); j++)
			for (int k = 0; k < b; k++) printf("%c", p[j]);
		printf("\n");
	}
}