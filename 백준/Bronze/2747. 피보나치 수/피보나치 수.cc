#include <stdio.h>

int fibo(int n) {
    int num1 = 1, num2 = 1, result;

    if (n <= 2)
        return 1;
    else {
        for (int i = 2; i < n; i++) {
            result = num1 + num2;
            num1 = num2;
            num2 = result;
        }
    }
    return result;
}

int main() {
    int num;
    scanf("%d", &num);
    printf("%d", fibo(num));
}