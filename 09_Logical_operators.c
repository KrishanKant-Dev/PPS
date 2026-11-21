#include <stdio.h>

int main()
{
    int age = 20;

    printf("%d\n", age >= 18 && age <= 60);
    printf("%d\n", age < 18 || age > 60);
    printf("%d\n", !(age >= 18));

    return 0;
}