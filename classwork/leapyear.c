#include <stdio.h>

void leapyear(int yr){
    if(yr%4==0){
        if(yr%100==0){
            printf("It is a leap year.\n");
        }else{
            printf("It is not a leap year.\n");
        }
    } else {
       printf("It is not a leap year.\n"); 
    }
}

int main(){
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    leapyear(year);
    return 0;
}
