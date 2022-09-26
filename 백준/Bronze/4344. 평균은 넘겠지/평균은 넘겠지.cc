#include<stdio.h>
int main() {
	int c = 0, num = 0;
	scanf("%d", &c);

	for (int i = 0; i < c; i++) {
		scanf("%d", &num);
		int score[1000], sum = 0;
		double avg = 0.00;
		for (int j = 0; j < num; j++) {
			scanf("%d", &score[j]);
			sum += score[j];
		}

		avg = (double)sum / num;
		int count = 0;
		for (int j = 0; j < num; j++) {
			if (avg < score[j])
				count++;
		}
		printf("%.3f%%\n", (double)count * 100 / num);
	}
	return 0;
}