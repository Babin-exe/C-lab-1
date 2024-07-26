#include <stdio.h>
int main()
{
    int x, y, i, st=1;

    printf("Enter the base:");
    scanf("%d", &x);

    printf("Enter the power:");
    scanf("%d", &y);

    for (int i = 1; i <= y; i++)
    {
       st = x*st;
    }
    printf("%d", st);

    return 0;
}