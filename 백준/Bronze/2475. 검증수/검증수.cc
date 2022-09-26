#include <stdio.h>
int main() {
	int num, num2, num3, num4, num5;
	int sum;
	scanf("%d %d %d %d %d", &num, &num2, &num3, &num4, &num5);
	sum = num * num + num2 * num2 + num3 * num3 + num4 * num4 + num5 * num5;
	printf("%d", sum%10);
}