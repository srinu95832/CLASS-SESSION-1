#include <stdio.h>

int main() {
    int rows, i, j, k;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        // Print spaces before the numbers
        for (j = 1; j <= rows - i; j++) {
            printf("   ");
        }
        // Print the numbers in decreasing order
        for (k = i; k >= 1; k--) {
            printf("%3d", k);
        }
     
        printf("\n");
    }

    return 0;
}

