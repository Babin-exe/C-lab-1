#include <stdio.h>
int main()
{
    int n, f = 1;

    printf("Enter a number : ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Factorial doesnt exists\n");
    }
    else
    {

        for (int i = 1; i <= n; i++)
        { 
            f = f * i;
        }
        printf("The factorial of % d is : %d\n", n, f);
    }
    return 0;
}