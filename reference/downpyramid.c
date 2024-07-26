#include <stdio.h>
int main()
{

    int i, j, space, rows;

    printf("Enter a number :");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++)
    {
        for (space = 1; space <= (rows-i); space++)
        {
            printf(" ");
        }
        for (j = 1; j <=i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
