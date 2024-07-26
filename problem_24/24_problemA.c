#include <stdio.h>
int main()
{
    int n, sum = 0;

    printf("Enter the number(n):");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        sum = sum + (11 * i);
    }
    printf("The sum of series of %d terms is :%d\n", n, sum);

    return 0;
}