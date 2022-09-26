#include <stdio.h>

int main() {
	int highnum, middlenum, num[10000], point;
	scanf("%d %d", &highnum, &middlenum);
	for(int i = 0; i < highnum; i++) {
		scanf("%d", &num[i]);
		if(middlenum > num[i]) {
			printf("%d ", num[i]);
		}
	}
}