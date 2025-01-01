#include <stdio.h>
#include <string.h>

void checkpalindrome(char s[]){
    int i, len, flag=0;
    len=strlen(s);
    for(i=0; i<len; i++){
       if(s[i]==s[len-i-1]) {
           flag =1; 
        }
    }
    if (flag){
        printf("\n The string is palindrome");
    } else {
        printf("\n The string is not palindrome");
    }
}

int main(){
    char ch[100];
    int i, len;
    printf("\nEnter a string");
    scanf("%s", ch);
    len = strlen(ch);
    checkpalindrome(ch);
    printf("\n The string in the reverse order; ");
    for(i=len-1;i>=0;i--){
        printf("%c", ch[i]);
    }
    return 0;
}

