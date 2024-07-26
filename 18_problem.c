#include <stdio.h>
int main()
{

    int n, r, sum = 0, temp;

    printf("Enter a number:");
    scanf("%d", &n);
    temp = n;

    if (n == 0 || n <= 9)
    {
        printf("%d is not pallindrome ", n);
    }
    else
    {

        while (n != 0)
        {
            r = n % 10;
            sum = r + (sum * 10);
            n = n / 10;
        }
        if (sum == temp)
        {
            printf("%d is palindrome", sum);
        }
    }
    return 0;
}