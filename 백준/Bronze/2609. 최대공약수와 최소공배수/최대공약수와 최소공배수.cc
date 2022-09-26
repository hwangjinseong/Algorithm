#include <stdio.h>

int downfunc(int n1, int n2) {
	int r = n1 % n2;
	if (r == 0) {
		return n2;
	} else return downfunc(n2, r);
}

int main() {
	int n1, n2, up = 0, down = 0;
	scanf("%d %d", &n1, &n2);
	down = downfunc(n1, n2);
	up = (n1 * n2) / down;
	printf("%d\n%d", down, up);
}