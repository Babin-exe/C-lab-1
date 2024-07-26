#include <stdio.h>
int main()
{

    int i, j;

    for (int i = 1; i <= 10; i++)
    {

        for (int j = 1; j <= 10; j++)
        {
            int prod=i *j;
            printf("%d * %d = %d\n", i, j, prod);
        }
printf("\n");
    }
    return 0;
}