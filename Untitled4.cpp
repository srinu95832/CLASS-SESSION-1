#include <stdio.h>
int main() {
    char name[50];
    int age;
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter your age: ");
    scanf("%d", &age);
	if (age >= 18) {
        printf("%s, you are eligible to vote.\n", name);
    } else {
        int years_left = 18 - age;
        printf("%s, you are not yet eligible to vote. You have to wait %d more years.\n", name, years_left);
    }
	return 0;
}

