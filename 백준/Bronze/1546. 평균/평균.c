#include <stdio.h>

int main() {
	int num, score, max = 0;
	double sum = 0;
	scanf("%d", &num);
	for(int i = 0; i < num; i++) {
		scanf("%d", &score);
		sum += score;
		if(max < score) {
			max = score;
		}
	}
	printf("%lf", (sum / max * 100) / num);
}