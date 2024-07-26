#include <stdio.h>
int main()
{

    int n, r, sum, st;
    for (int i = 1; i <= 1000; i++)
    {
        n = i;
        st = n;
        sum = 0;
        while (n != 0)
        {
            r = n % 10;
            sum += (r * r * r);
            n = n / 10;
        }
        if (st == sum)
        {
            printf("%d is an armstrong\n", sum);
        }
    }

    return 0;
}