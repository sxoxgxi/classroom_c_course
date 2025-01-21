#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char s[100];
    fp = fopen("welcome.txt", "w+");
    if (fp == NULL) {
        printf("File cannot be opened for writing.\n");
        return 1;
    } else {
        printf("File has been successfully created.\n");
    }
    fputs("Welcome to Computer Programming", fp);
    fseek(fp, 0, SEEK_SET);
    fgets(s, 100, fp);
    printf("\nThe text file contains: %s\n", s);
    fclose(fp);
    return 0;
}
