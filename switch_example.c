// Question Number 6: switch example 

#include <stdio.h>

int main() {
    int choice, a, b;
    printf("Menu:\n1. Addition\n2. Subtraction\n3. Multiplication\nEnter your choice: ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    switch (choice) {
        case 1:
            printf("Result: %d\n", a + b);
            break;
        case 2:
            printf("Result: %d\n", a - b);
            break;
        case 3:
            printf("Result: %d\n", a * b);
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}
