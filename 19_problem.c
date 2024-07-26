#include <stdio.h>
int main()
{
    int age, count = 0;

    printf("Enter the age of 20 persons : \n");

    for (int i = 1; i <= 20; ++i)
    {

        printf("person %d :", i);
        scanf("%d", &age);

        if (age >= 50 && age <= 60)
        {
            count++;
        }
    }
    printf("People within the range between 50 and 60 is : %d", count);

    return 0;
}