#include <stdio.h>
int main()
{

    int n, count = 0;

    printf("\nEnter a number: ");
    scanf("%d", &n);

    if (n == 0)
    {
        printf("Total digits is : 1\n");
    }

    else
    {

        while (n != 0)
        {
            n = n / 10;
            count++;
        }
        printf("Total digits is : %d", count);
    }
    return 0;
}