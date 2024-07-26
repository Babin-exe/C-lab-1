#include <stdio.h>
#include <math.h>
int main()
{
    int n,x;
    float sum;

    printf("Enter the number :");
    scanf("%d", &n);

    printf("Enter the base value :");
    scanf("%d", &x);

    for (int i = 1; i <= n; i++)
    {

         float store = (i / pow(x, i));

        sum = sum + store;
    }
    printf("%f",sum);
    return 0;
}