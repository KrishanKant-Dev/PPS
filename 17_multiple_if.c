#include <stdio.h>

int main()
{
    int number = 10;

    if (number > 0)
    {
        printf("Positive number\n");
    }

    if (number % 2 == 0)
    {
        printf("Even number\n");
    }

    if (number > 5)
    {
        printf("Greater than 5\n");
    }

    return 0;
}