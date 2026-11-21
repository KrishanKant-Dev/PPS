#include <stdio.h>

int main()
{
    int attendance = 80;
    int marks = 55;

    if (attendance >= 75 && marks >= 40)
    {
        printf("Eligible");
    }
    else
    {
        printf("Not Eligible");
    }

    return 0;
}