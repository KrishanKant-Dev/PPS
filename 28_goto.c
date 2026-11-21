#include <stdio.h>

int main()
{
    int num = 1;

    if (num == 1)
    {
        goto positive;
    }

    printf("This statement is skipped");

positive:
    printf("Number is one");

    return 0;
}