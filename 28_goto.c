#include <stdio.h>

int main()
{
    int i;

    for(i = 1; i<=5; i++)
    {
        if(i == 3)
            goto meow;
        printf("%d ",i);
    }
    meow:
        printf("Exited");
    return 0;
}