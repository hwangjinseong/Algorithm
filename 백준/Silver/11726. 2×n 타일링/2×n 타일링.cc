#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    scanf("%d", &n);
    int arr[1001] = {0, };
    arr[0]= 1;
    arr[1] = 2;
    for(int i = 2; i <= n; i++){
        arr[i] = (arr[i - 2] + arr[i - 1]) % 10007;
    }
    printf("%d\n", arr[n - 1]);
    return 0;
}