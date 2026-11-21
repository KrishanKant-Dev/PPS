#include <stdio.h>

void directRec(int n)
{
    if (n > 0)
    {
        printf("%d ", n);

        directRec(n - 1);
    }
}

int main()
{
    directRec(5);

    return 0;
}