#include <stdio.h>
int main()
{
    int rows = 4;
    for (int i = 1; i <= rows; i++)
    {
        for (int space = 1; space <= (rows - i); space++)
        {
            printf(" ");
        }

        for (int j = i; j >= 1; j--)
        {
            printf("%d", j);
        }
        for (int j = 2; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
