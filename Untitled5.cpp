#include <stdio.h>
#include <math.h>

int main() {
    int x, n, choice;
    float result;
    
    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    printf("Choose an arithmetic operation:\n");
    printf("1. Power\n2. Addition\n3. subtraction\n4. Multiplication\n5. Division\n");
    scanf("%d", &choice);
    
    switch(choice) {
        case 1:
            result = pow(x, n);
            printf("%d to the power of %d is %.2f\n", x, n, result);
            break;
        case 2:
            result = x + n;
            printf("%d + %d = %.2f\n", x, n, result);
            break;
            case 3:
            result = x - n;
            printf("%d - %d = %.2f\n", x, n, result);
            break;
            case 4:
            result = x * n;
            printf("%d * %d = %.2f\n", x, n, result);
            break;
        case 5:
            if(n == 0) {
                printf("Error: Division by zero\n");
            } else {
                result = (float)x / (float)n;
                printf("%d / %d = %.2f\n", x, n, result);
            }
            break;
        default:
            printf("Invalid choice\n");
    }
    
    return 0;
}
