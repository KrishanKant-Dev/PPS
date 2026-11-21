#include <stdio.h>

int main() // 121
{
    int num, org_num, remainder = 0, reverse = 0;
    printf("Enter the number: ");
    scanf("%d",&num);

    org_num = num;
    do 
    {
        remainder = num % 10;
        reverse = reverse*10 + remainder;
        num /= 10;
    } while(num!=0); // imp condition

    if(reverse == org_num)
        printf("%d is Palindrome",org_num);
    else
        printf("%d isn't Palindrome",org_num);

    return 0;
}