#include <stdio.h>

int main() {
	int yoon;
	scanf("%d", &yoon);
	if(yoon%100!=0 && yoon%4==0 || yoon%400==0) {
		printf("1");
	}
	else printf("0");
}