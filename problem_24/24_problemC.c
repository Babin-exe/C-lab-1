#include <stdio.h>
#include <math.h>
int main()
{
    int n, i,x;
        float sum = 0;
    printf("Enter the number of terms :");
    scanf("%d", &n);

    printf("Enter the base(x) value : ");
    scanf("%d", &x);

    for (i = 1; i <= n; i++)
    {
        double power = (2 * i) - 1;
        sum = sum + i / pow(x, power);
    }

    printf("The sum is :%.2f\n", sum);
    return 0;
}