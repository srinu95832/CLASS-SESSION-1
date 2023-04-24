#include <stdio.h>
int main() {
    int numRows, i, j;
	 printf("Enter the number of rows: ");
    scanf("%d", &numRows);
	for (i = 1; i <= numRows; i++) {
        // Print spaces before numbers
        for (j = 1; j <= numRows - i; j++) {
            printf("   ");
        }
		// Print numbers in descending order
        for (j = i; j >= 1; j--) {
            printf("%-4d", j);
        }

        printf("\n");
    }

    return 0;
}
