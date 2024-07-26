#include <stdio.h>
int main()
{

    int n, temp = 0;

    printf("Enter a number :");
    scanf("%d", &n);

    if (n <= 1)
    {
        printf("%d is neither prime nor composite\n", n);
    }

    else
    {

        for (int i = 2; i * i <= n; i++)
        {

            if (n % i == 0)
            {
                temp++;
            }
        }
        if (temp == 0)
        {
            printf("%d is prime", n);
        }
        else
        {
            printf("%d is composite", n);
        }
    }
    return 0;
}