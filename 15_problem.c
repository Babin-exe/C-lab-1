#include <stdio.h>
int main()
{
    int i, n, r;

    printf("Enter a number : ");
    scanf("%d", &n);
    i = n;
    printf("digits in %d are : ", n);
    while (n != 0)
    {
        r = n % 10;
        printf("%4d",r);
        n = n / 10;
    }



    return 0;
}