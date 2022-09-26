#include <stdio.h>

int main() {
	int k, d, a;
	int gh = 0;
	scanf("%d/%d/%d", &k, &d, &a);
	gh = k + a;
	if (gh < d || d == 0) {
		printf("hasu");
	}
	else printf("gosu");
}