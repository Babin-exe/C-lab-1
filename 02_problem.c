#include <stdio.h>
int main()
{
    int i = 1, sum = 0;
    do
    {

        if (i % 2 != 0)
        {

            sum = sum + i;
        }
        i++;

    } while (i <= 100);
    printf("The sum is %d", sum);

    return 0;
}