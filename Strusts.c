#include <stdio.h>
#include <stdlib.h>

struct Student
{
    char name[50];
    char major[50];
    int age;
    double gpa;
};

int main()
{
    /*
    printf("Enter student name: ");
    scanf("%s", &name)
    printf("Enter student major: ");
    scanf("%s", &major)
    printf("Enter student name: ");
    scanf("%d", &age)
    printf("Enter student name: ",);
    scanf("%lf", &gpa)
    */

    struct Student student1;
    student1.age = 22;
    student1.gpa = 3.2;
    strcpy( student1.name, "Jim");
    strcpy( student1.major, "Business");

    struct Student student2;
    student2.age = 20;
    student2.gpa = 3.8;
    strcpy( student2.name, "May");
    strcpy( student2.major, "Science");

    printf("%s\n", student1.name);
    printf("%s\n", student1.major);
    printf("%d\n", student1.age);
    printf("%f\n", student1.gpa);

    /*
    printf("%s\n", student);
    printf("%s\n", student);
    printf("%d\n", student);
    printf("%f\n", student);
    */


    return (0);
}

