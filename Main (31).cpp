// display all multiplition table from 1 to 20
#include <stdio.h>
int main() {
    int i, j;

    // Display multiplication table from 1 to 20
    for (i = 1; i <= 20; i++) {
        printf("Multiplication table for %d:\n", i);
        for (j = 1; j <= 10; j++) {
            printf("%d x %d = %d\n", i, j, i * j);
        }
        printf("\n"); // Add a newline for better readability
    }

    return 0;
}