#include <stdio.h>
int main()
{

    int n, sum = 0, r;

    printf("Enter a number : ");
    scanf("%d", &n);
    int temp = n;

    while (n != 0)
    {
        r = n % 10;
        sum += r;
        n = n / 10;
    }
    printf("The sum of %d is : %d \n", temp, sum);
    return 0;
}