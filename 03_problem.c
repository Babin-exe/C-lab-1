#include <stdio.h>
int main()
{
    int n, sum = 0;
    double avg = 0.00;

    printf("Enter the terms :");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    avg = (double)sum / n;
    printf("\nThe sum of %d terms is %d", n, sum);
    printf("\nThe average  of %d terms is %.2lf", n, avg);

    return 0;
}