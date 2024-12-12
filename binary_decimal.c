// Question number 9: binary to decimal and vice versa.

#include <stdio.h>

void binaryToDecimal(int binary) {
    int decimal = 0, base = 1, remainder;
    while (binary > 0) {
        remainder = binary % 10;
        decimal += remainder * base;
        binary /= 10;
        base *= 2;
    }
    printf("Decimal: %d\n", decimal);
}

void decimalToBinary(int decimal) {
    int binary = 0, remainder, base = 1;
    while (decimal > 0) {
        remainder = decimal % 2;
        binary += remainder * base;
        decimal /= 2;
        base *= 10;
    }
    printf("Binary: %d\n", binary);
}

int main() {
    int choice, num;
    printf("1. Binary to Decimal\n2. Decimal to Binary\nEnter your choice: ");
    scanf("%d", &choice);

    printf("Enter the number: ");
    scanf("%d", &num);

    if (choice == 1)
        binaryToDecimal(num);
    else if (choice == 2)
        decimalToBinary(num);
    else
        printf("Invalid choice.\n");

    return 0;
}
