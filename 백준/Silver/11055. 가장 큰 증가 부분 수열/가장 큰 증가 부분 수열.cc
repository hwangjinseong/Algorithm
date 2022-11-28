#include <stdio.h>

int main() {
	int arr[1001];
	int dp[1000];
	int num, max = 0; 
	scanf("%d", &num);
	for(int i = 1; i <= num; i++) {
		scanf("%d", &arr[i]);	
	}
	for(int i = 1; i <= num; i++) {
		dp[i] = arr[i];
		for(int j = 1; j < i; j++)
			if(arr[j] < arr[i] && dp[i] < dp[j] + arr[i])
				dp[i] = dp[j] + arr[i];
		if(max < dp[i]) {
			max = dp[i];	
		}
	}
	printf("%d", max);
}