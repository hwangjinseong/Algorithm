#include <stdio.h>
int arr[1001];
int dp[1001];
int Max(int a,int b) {
    return a>b?a:b;
}
void card(int N) {
	int i, j;
    dp[0] = 0;
    for (i = 1; i <= N; i++) {
        for (j = 1; j <= i; j++) {
            dp[i] = Max(dp[i],dp[i-j]+arr[j]);
        }
    }
    printf("%d", dp[i-1]);
}
 
int main() {
    int num;
    scanf("%d", &num);
    for (int i = 1; i <=num; i++) {
        scanf("%d", &arr[i]);
    }
    card(num);
}
