#include <stdio.h>

int main(){
    char str[50];
    int  i;
    printf("Enter a string: ");
    scanf("%s", str);
    for(i=0; str[i]!='\0'; i++);
    printf("The length of the string is: %d", i);
    return 0;
}