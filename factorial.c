// Question 5: Factorial using for loop

#include <stdio.h>

int main() {
    int num, i;
    int factorial = 1; 

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial of a negative number does not exist.\n");
    } else {
        for (i = 1; i <= num; i++) {
            factorial *= i;
        }
        printf("Factorial of %d is: %d\n", num, factorial);
    }

    return 0;
}

