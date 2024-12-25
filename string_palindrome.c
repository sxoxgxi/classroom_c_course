#include <stdio.h>

int main(){
    int length = 0;
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    
    while (str[length] != '\0') {
        length++;
    }
    int i,j;
    for(i=0, j=length-1; i<j; i++, j--){
        if(str[i] != str[j]){
            printf("%s is not a palindrome string.", str);
            return 0;
        }
    }
    
    printf("%s is a palindrome string.", str);
    
    return 0;
}
