#include <stdio.h>

int main() {
	int arr[50];
	int num;
	int point, point_rank=1, point_p=1;
	int r;
	
	scanf("%d %d %d", &num, &point, &r);

	for (int i = 0; i < num; i++) {
		scanf("%d", arr + i);
		if (arr[i] > point) point_rank++;
		if (arr[i] >= point) point_p++;	
	}
	if (point_rank > r) printf("-1");
	else if (point_p > r)printf("-1");
	else printf("%d", point_rank);
}