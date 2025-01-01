#include <stdio.h>

void strconcat(char s1[], char s2[]){
   int i,j;
    for(i=0; s1[i]!='\0'; i++);
    for(j=0; s2[j]!='\0'; j++){
        s1[i]=s2[j];
        i++;
    }
    s1[i]='\0';
    
    printf("concatenated string: %s", s1);
}

int main(){
    char s1[20], s2[20];
    printf("enter first string: ");
    scanf("%s", s1);
    printf("enter second string: ");
    scanf("%s", s2);
    strconcat(s1, s2);
    return 0;
}
