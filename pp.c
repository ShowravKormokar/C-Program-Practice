#include <stdio.h>
#include <string.h>

int main()
{
    char str[500], search;
    int i, flag = 0;

    printf("Enter any string: ");
    gets(str);
    printf("Enter any character to search: ");
    scanf("%d", &search);

    for (i = 0; str[i]; i++) // Run loop till the last character of string
    {
        for (int j = i; j <= search; j++)
            if (j == search) // If found
            {
                printf("%c\n", str[i]);
                // flag = 1;
                // break;
            }
    }
    /*if (flag == 0)
        printf("%d is't present.\n", search);

    return 0;*/
}

/*#include <stdio.h>
#include <string.h>
int main()
{
    char str[200];
    gets(str);
    int size = length(str);

    // I am a boy
    int i, j, n;
    scanf("%d", &n);
    for (i = 0; str[i]; i++)
    {
        for (j = 0; j < size; j++)
        {
            if (size = n)
            {
                printf("%c", str[i]);
            }
        }
    }
    return 0;
}*/