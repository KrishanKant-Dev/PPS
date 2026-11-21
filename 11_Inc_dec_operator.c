#include <stdio.h>

int main()
{
    int a = 5, b;

    b = ++a;
    printf("Pre-increment: a = %d, b = %d\n", a, b);

    a = 5;
    b = a++;
    printf("Post-increment: a = %d, b = %d\n", a, b);

    return 0;
}