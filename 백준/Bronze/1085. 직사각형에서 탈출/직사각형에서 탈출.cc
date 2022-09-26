#include <stdio.h>

int main() {
	int x, y, w, h, min = 0;
	scanf("%d %d %d %d", &x, &y, &w, &h);
	min = x;
	if(min > y) min = y;
	if(min > h-y) min = h-y;
	if(min > w-x) min = w-x;
	printf("%d", min);
}