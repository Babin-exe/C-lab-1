#include <stdio.h>

int main() {
    int rows; // Number of rows to print
printf("Enter the rows ");
scanf("%d",&rows);
    // Loop through each row
    for (int i = 1; i <= rows; i++) {
        // Print spaces to align to the right side
        for (int space = 1; space <= rows - i; space++) {
            printf("   "); // Adjust spacing for alignment
        }

        // Print numbers
        for (int j = 1; j <= i; j++) {
            if (j > 1) {
                printf("  "); // Print space between repeated numbers
            }

            
            printf("%d", i); // Print the number
        }

        printf("\n");
    }

    return 0;
}
