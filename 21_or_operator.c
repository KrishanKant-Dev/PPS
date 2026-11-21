#include <stdio.h>

int main()
{
    int age = 20;
    int isStudent = 1;

    if (age >= 60 || isStudent == 1)
    {
        printf("Discount available");
    }
    else
    {
        printf("No discount");
    }

    return 0;
}