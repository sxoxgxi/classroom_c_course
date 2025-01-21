#include <stdio.h>

struct student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct student s[3], s1[3];
    FILE *file = fopen("studentrecords.txt", "w");
    if (file == NULL) {
        printf("Error: Unable to open file for writing.\n");
        return 1;
    }
    for (int i = 0; i < 3; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", s[i].name);
        printf("Roll: ");
        scanf("%d", &s[i].roll);
        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }
    fwrite(s, sizeof(struct student), 3, file);
    fclose(file);

    file = fopen("studentrecords.txt", "r");
    if (file == NULL) {
        printf("Error: Unable to open file for reading.\n");
        return 1;
    }
    printf("\nStudent Records:\n");
    printf("Name\t\tRoll\t\tMarks\n");
    for (int i = 0; i < 3; i++) {
        fread(&s1[i], sizeof(struct student), 1, file);
        printf("%s\t\t%d\t\t%.2f\n", s1[i].name, s1[i].roll, s1[i].marks);
    }
    fclose(file);
    return 0;
}
