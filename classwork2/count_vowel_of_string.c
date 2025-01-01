#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char a[100];
    int leng, i, vow=0;
    printf("enter a string; ");
    scanf("%s", a);
    leng = strlen(a);
    for(i=0; i<leng; i++){
        if(a[i]=='a'||a[i]=='A' || a[i] =='e' || a[i]=='E' || a[i]=='i' || a[i]=='I' || a[i]=='o' || a[i]=='O' || a[i]=='u' || a[i]=='U'){
           vow = vow + 1; 
        }
    }
    printf("the number of vowels in the string is %d", vow);
    return 0;
}
