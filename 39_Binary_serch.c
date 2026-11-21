#include <stdio.h>

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int mid, low = 0, high = 4, key = 40;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == key)
        {
            printf("Element found at position: %d", mid + 1);
            return 0;
        }
        else if (key > arr[mid])
            low = mid + 1;
        else
            high = mid - 1;
    }
    printf("Element not found");
    return 0;
}