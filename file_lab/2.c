#include <stdio.h>

int main() {
    struct Student {
        char name[20];
        int roll;
        float marks;
    } s;
    FILE *fp;
    int i;

    fp = fopen("ioe.txt", "w");
    for (i = 0; i < 96; i++) {
        printf("\nEnter name of student: ");
        scanf("%s", s.name);
        printf("Enter roll number of student: ");
        scanf("%d", &s.roll);
        printf("Enter marks obtained by student in 100: ");
        scanf("%f", &s.marks);
        fprintf(fp, "%d\t%s\t%.2f\n", s.roll, s.name, s.marks);
    }
    fclose(fp);

    fp = fopen("ioe.txt", "r");
    printf("\nStudents who scored 40 or more marks:\n");
    printf("Roll No\tName\tMarks\n\n");
    while (fscanf(fp, "%d%s%f", &s.roll, s.name, &s.marks) != EOF) {
        if (s.marks >= 40) {
            printf("%d\t%s\t%.2f\n", s.roll, s.name, s.marks);
        }
    }
    fclose(fp);
    return 0;
}
