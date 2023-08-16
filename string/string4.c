#include<stdio.h>
#include<string.h>

int main()
{
    char str[500], search;
    int i, flag=0;

    printf("Enter any string: ");
    gets(str);
    printf("Enter any character to search: ");
    scanf("%c", &search);

    for (i = 0; str[i]; i++)//Run loop till the last character of string
    {
        if (str[i] == search) // If found
        {
            printf("%c is present at location %d.\n", search, i+1);
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        printf("%c is't present.\n", search);

    return 0;
}
