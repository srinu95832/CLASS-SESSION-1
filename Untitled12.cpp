#include <stdio.h>
int isComposite(int n) {
    if (n <= 1) {
        return 0;
    }
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            return 1;
        }
    }
    return 0;
}
int main() {
    int n, count = 0;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
	int arr[n], composite[n];
	printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (isComposite(arr[i])) {
            composite[count] = arr[i];
            count++;
        }
    }
	 printf("\nThe composite numbers in the array are: ");
    for (int i = 0; i < count; i++) {
        printf("%d ", composite[i]);
    }
	printf("\n\nThe total number of composite numbers in the array is: %d", count);
	 return 0;
}

