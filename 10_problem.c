#include <stdio.h>
int main()
{

    int n, r, s = 0, t;

    printf("Enter a number : ");
    scanf("%d", &n);

    t = n;

    if (t <= 0 || t <= 9)
    {
        printf("%d is not pallindrome", t);
    }

    else
    {

        while (n > 0)
        {
            r = n % 10;
            s = r + (s * 10);
            n = n / 10;
        }
        if (t == s)
        {
            printf("%d is a pallindrome number\n", t);
        }
        else
        {
            printf("%d is not a pallindrome number \n", t);
        }
    }
    return 0;
}