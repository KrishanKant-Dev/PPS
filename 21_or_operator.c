#include <stdio.h>

int main()
{
    int age;

    printf("Enter the age: ");
    scanf("%d",&age);

    if(age < 18 || age>60)
        printf("You can't be Employed");
    else
        printf("You are Employable");
    return 0;
}