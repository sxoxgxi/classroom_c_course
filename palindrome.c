// Question 8: Palindrome or not

#include <stdio.h>

int main() {
    int num, reversed= 0, remainder, original;
    printf("Enter a number: ");
    scanf("%d", &num);
    original= num;

    while (num != 0) {
        remainder = num % 10;
        reversed= reversed* 10 + remainder;
        num /= 10;
    }

    if (original== reversed)
        printf("%d is a palindrome\n", original);
    else
        printf("%d is not a palindrome\n", original);

    return 0;
}

