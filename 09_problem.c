#include <stdio.h>
int main()
{

    int n, sum = 0, r;

    printf("Enter a number :");
    scanf("%d", &n);

    int temp = n;
    if (temp <= 0)
    {
        printf("%d is not an armstrong number \n", temp);
    }

    else
    {

        while (n != 0)
        {
            r = n % 10;
            sum = sum + (r * r * r);
            n = n / 10;
        }
        if (temp == sum)
        {
            printf("%d is an armstrong number\n", temp);
        }
        else
        {
            printf("%d is not an armstrong number \n", temp);
        }
    }
    return 0;
}