#include <stdio.h>
int main() {
	int num, numside, max = -1000000, min = 1000000;
	scanf("%d", &num);
	for(int i = 0; i < num; i++) {
		scanf("%d", &numside);
		if(max < numside) {
			max = numside;
		}
		if(min > numside) {
			min = numside;
		}
	}
	printf("%d %d", min, max);
}