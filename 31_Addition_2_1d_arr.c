#include <stdio.h>

int main()
{
    int a[5] = {10, 20, 30, 40, 50};
    int b[5] = {1, 2, 3, 4, 5};
    int c[5];
    int i;

    for (i = 0; i < 5; i++)
    {
        c[i] = a[i] + b[i];
    }

    printf("Result: ");

    for (i = 0; i < 5; i++)
    {
        printf("%d ", c[i]);
    }

    return 0;
}