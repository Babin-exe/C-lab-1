#include <stdio.h>

int main() {
    int n, first = 0, second = 1, next;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Number of terms should be at least 2.\n");
        return 1;
    }

    printf("Fibonacci Series: %d, %d", first, second);

    for (int i = 3; i <= n; ++i) {
        next = first + second;
        printf(", %d", next);
        first = second;
        second = next;
    }
    printf("\n");

    return 0;
}
