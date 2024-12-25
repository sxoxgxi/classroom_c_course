// Question 1: Palindrome or not using do-while loop

#include <stdio.h>

int main() {
    int num, original, reversed = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num; 

    do {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num = num / 10;
    } while (num != 0);

    if (original == reversed) {
        printf("%d is a palindrome number.\n", original);
    } else {
        printf("%d is not a palindrome number.\n", original);
    }

    return 0;
}


