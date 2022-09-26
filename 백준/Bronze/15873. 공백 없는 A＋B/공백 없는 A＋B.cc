#include <stdio.h>

int main() {
	int num;
	scanf("%d", &num);
	int a = num / 10;
	int b = num % 100;
	if (a > 10)
		a /= 10;
	if (b > 10)
		b %= 10;
	printf("%d\n", a + b);
	
}