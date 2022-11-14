#include <stdio.h>

int dp[301];
int arr[301];
 
int max(int a,int b) {
    return a > b ? a : b;
}
int main() {
    int num, i;
    scanf("%d", &num);
    for (i = 0; i < num; i++) {
        scanf("%d", &arr[i]);
    }
    dp[0] = arr[0];
    dp[1] = max(arr[0], arr[0] + arr[1]);
    dp[2] = max(arr[1] + arr[2], arr[0] + arr[2]);
    for (i = 3; i < num; i++) {
        dp[i] = max(arr[i] + dp[i - 2], arr[i] + arr[i - 1] + dp[i - 3]);
    }
    printf("%d", dp[num-1]);
}
