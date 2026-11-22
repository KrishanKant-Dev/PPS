#include <stdio.h>
#include <string.h>

union student{
    int rollno;
    char name[50];
    float marks;
};

int main()
{
    union student s1;

    s1.rollno = 23;
    printf("Roll no: %d",s1.rollno);

    strcpy(s1.name,"Rohan");
    printf("\nName: %s",s1.name);

    s1.marks = 46;
    printf("\nMarks: %.2f",s1.marks);

    
    return 0;
}