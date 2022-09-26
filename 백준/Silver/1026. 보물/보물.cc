#include<stdio.h>
int main() {
    int n, t, sum = 0;
    int A[50] = { 0, };
    int B[50] = { 0, };
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &A[i]);
    for (int i = 0; i < n; i++)
        scanf("%d", &B[i]);
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (A[j] < A[j + 1]) {
                t = A[j];
                A[j] = A[j + 1];
                A[j + 1] = t;
            }
        }
        for (int j = 0; j < n - 1; j++) {
            if (B[j] > B[j + 1]) {
                t = B[j];
                B[j] = B[j + 1];
                B[j + 1] = t;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        sum += A[i] * B[i];
    }
    printf("%d", sum);
}