#include <stdio.h>
int main()
{

    int n, r, check = 1;

    printf("Enter a number : ");
    scanf("%d", &n);
    int var = n;

    while (n > 0)
    {
        r = n % 10;
        if (r % 2 != 0)
        {
            check = 0;
            break;
        }
        n = n / 10;
    }
    if (check)
    {
        printf("%d is a relay number.\n", var);
    }
    else
    {
        printf("%d is not a relay number.\n", var);
    }
    return 0;
}