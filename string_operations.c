#include <stdio.h>
#include <string.h>

int main()
{
    char str1[50] = "welcome to  ";
    char str2[50] = "lab exam";
    char str3[50];

    printf("Length of str1: %d\n", strlen(str1));

    strcpy(str3, str1);
    printf("Copied string: %s\n", str3);

    strcat(str1, str2);
    printf("Concatenated string: %s\n", str1);

    if (strcmp(str2, str3) == 0)
        printf("Strings are equal\n");
    else
        printf("Strings are not equal\n");

    return 0;

  out put
}Length of str1: 12
Copied string: welcome to
Concatenated string: welcome to  lab exam
Strings are not equal


