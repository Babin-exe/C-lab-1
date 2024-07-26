#include <stdio.h>
int main()
{

    int i, r;

    printf("Enter a number : ");
    scanf("%d", &i);

    while (i != 0)
    {
        r = i % 10;
        printf("%d\n", r);
        i = i / 10;
    }

    return 0;
}