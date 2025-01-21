// convert a lowercase character string into uppercase using array;
#include <stdio.h>

int main()
{
    char str[50];
    int i=0;
    printf("Enter a string: ");
    scanf("%s", str);
    while(str[i]!='\0')
    {
        if(str[i]>='a' && str[i]<='z')
        {
            str[i]=str[i]-32;
        } else {
            str[i]=str[i];
        }
        
        i++;
    }
    printf("The uppercase string is: %s", str);
    return 0;
}
