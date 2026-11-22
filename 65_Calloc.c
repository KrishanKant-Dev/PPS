#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr = calloc(3, sizeof(int));

    if (ptr == NULL)
    {
        printf("Allocation Failed");
        return 1;
    }
    ptr[0] = 10;
    ptr[1] = 20;
    ptr[2] = 30;

    printf("%d %d %d", ptr[0], ptr[1], ptr[2]);

    free(ptr);
    return 0;
}