#include <stdio.h>

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);


    if (n <= 0)
    {
        printf("No cubes to display for non-positive input.\n");
    }
    else
    {
    printf("Cubes up to %d that are perfectly divisible by 3:\n", n);
        for (int i = 1; i <= n; i++)
        {
            int c = i * i * i;

            if (c % 3 == 0)
            {
                printf("%d\n", c);
            }
        }
    }

    return 0;
}
