#include <stdio.h>
 void han_soo(int N)
{
    
    if (N<100)
        printf("%d",N);
    else
    {
        int i;
        int cnt;
        int one_hundred, ten, one;
        cnt = 99;
        for (i = 100; i <=N; i++)
        {
            one_hundred = i / 100;
            ten = i / 10 % 10;
            one = i % 10;

            if ((one - ten) == (ten - one_hundred))
                cnt++;
        }
        printf("%d", cnt);
    }
}
int main()
{
    int N;
    scanf("%d", &N);
    han_soo(N);
}
