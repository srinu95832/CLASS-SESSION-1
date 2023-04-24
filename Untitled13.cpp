#include <stdio.h>

int main() {
    int n, count = 0;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] > 1) {
            for (int j = 2; j < arr[i]; j++) {
                if (arr[i] % j == 0) {
                    count++;
                    printf("%d ", arr[i]);
                    break;
                }
            }
        }
    }

    printf("\n\nThe total number of composite numbers in the array is: %d", count);

    return 0;
}

