#include <stdio.h>
#include <math.h>
int main()
{
    int f = 1, x;
    float store;
    int n;
    float sum = 0;

    printf("Enter the number of terms:");
    scanf("%d", &n);

    printf("Enter the value of Base(x) terms:");
    scanf("%d", &x);

    for (int i = 1; i <= n; i++)
    {
        store = pow(x, i);

        f = f * i;

        sum = sum + (store / f);
    }
    printf("The sum of the seires is : %f", sum);
    return 0;
}