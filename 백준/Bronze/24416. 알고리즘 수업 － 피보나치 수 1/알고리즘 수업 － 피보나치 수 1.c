#include <stdio.h>

int arr[100] = {0};
int n, cnt1 = 0, cnt2 = 0;

int fibo(int N) {
    if (N == 1 || N == 2) {
      cnt1++;
      return 1;  
    }
    else return fibo(N - 1) + fibo(N - 2);
}

int main() {
  scanf("%d", &n);
  fibo(n);
  arr[1] = arr[2] = 1;
  for(int i = 3; i <= n; i++) {
    arr[i] = arr[i - 1] + arr[i - 2];
    cnt2++;
  }
  printf("%d %d", cnt1, cnt2);
}