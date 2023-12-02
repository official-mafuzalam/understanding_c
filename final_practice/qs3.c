#include <stdio.h>
#include <string.h>

struct student
{
    int roll;
    char name[20];
    float cgpa;
};

int main()
{
    FILE *file;
    struct student st1;

    printf("Enter your name: ");
    fgets(st1.name, sizeof(st1.name), stdin);

    // Remove the newline character from the name
    st1.name[strcspn(st1.name, "\n")] = '\0';

    printf("Enter your roll: ");
    scanf("%d", &st1.roll);

    printf("Enter your cgpa: ");
    scanf("%f", &st1.cgpa);

    file = fopen("student_info.txt", "w");

    fprintf(file, "Roll: %d\n", st1.roll);
    fprintf(file, "Name: %s\n", st1.name);
    fprintf(file, "CGPA: %.2f\n", st1.cgpa);

    fclose(file);

    return 0;
}
