#include <stdio.h>

void modify(int arr[])
{
    arr[0] = 100;
}

int main()
{
    int arr[3] = {10, 20, 30};

    modify(arr);

    printf("First element = %d", arr[0]);

    return 0;
}