#include<stdio.h>                                                         
#include <math.h>
int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

	int square = num * num;
    printf("Square of %d is: %d\n", num, square);

	double sqrt_num = sqrt(num);
    printf("Square root of %d is: %f\n", num, sqrt_num);

	int cube = num * num * num;
    printf("Cube of %d is: %d\n", num, cube);
	return 0;
}

