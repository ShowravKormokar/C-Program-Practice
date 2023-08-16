#include <stdio.h>
#include <string.h>

int main()
{
    char str[500], str1[500];
    printf("Enter any string: ");
    gets(str);
    gets(str1);
    /*int i, j;

    for (i = 0; str[i]; i++) // use for loop to iterate the string
    {
        str[i] = str1[i];
    }
    str1[i] = '\0';*/
    printf("%s", strcpy(str, str1));
    return 0;
}