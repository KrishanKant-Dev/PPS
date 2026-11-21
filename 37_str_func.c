#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[50] = "Hello";
    char str2[50] = "World";
    char temp[100];

    printf("strlen: %lu\n", strlen(str1));

    strcpy(temp, str1);
    printf("strcpy: %s\n", temp);

    strcat(temp, str2);
    printf("strcat: %s\n", temp);

    printf("strcmp equal: %d\n", strcmp(str1, str1));

    strlwr(temp);
    printf("strlwr: %s\n", str1);

    strupr(temp);
    printf("strupr: %s\n", str1);

    strrev(temp);
    printf("strrev: %s\n", str1);

    return 0;
}