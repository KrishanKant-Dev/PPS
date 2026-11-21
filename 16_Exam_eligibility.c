#include <stdio.h>

int main()
{
    int attendance, marks;

    printf("Enter attendance percentage: ");
    scanf("%d", &attendance);

    printf("Enter marks: ");
    scanf("%d", &marks);

    if (attendance >= 75)
    {
        if (marks >= 40)
        {
            printf("Eligible for examination");
        }
        else
        {
            printf("Not eligible - Marks are low");
        }
    }
    else
    {
        printf("Not eligible - Attendance is low");
    }

    return 0;
}