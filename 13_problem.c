#include <stdio.h>
int main()
{

    for (int i = 1; i <= 100; i++)
    {
        int temp = 0;
        for (int j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                temp++;
                break;
            }
        }
        if (temp == 0 && i > 1)
        {
            printf("%d is prime\n", i);
        }
    }

    return 0;
}