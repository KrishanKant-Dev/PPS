#include <stdio.h>

struct student
{
    int rollno;
    char name[50];
    float marks;
};

int main()
{
    struct student s[3];
    int i;

    for (i = 0; i < 3; i++)
    {
        printf("Enter details of Student %d:\n", i + 1);
        scanf("%d %49s %f", &s[i].rollno, &s[i].name, &s[i].marks);
    }

    printf("Data:");
    for (i = 0; i < 3; i++)
    {
        printf("\nStudent %d:\n", i + 1);
        printf("roll no: %d\nname: %s\nmarks: %.2f", s[i].rollno, s[i].name, s[i].marks);
        printf("\n");
    }

    return 0;
}