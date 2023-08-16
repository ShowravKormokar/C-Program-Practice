#include <stdio.h>
#include <string.h>
int main()
{
    char name[100];
    puts("Enter any string: ");
    gets(name);
    int i, words = 0, characters = 0;
    for (i = 0; name[i]; i++)
    {
        if (name[i] == ' ')
        {
            words++;
        }
        else
        {
            characters++;
        }
    }
    printf("Total number of words : %d\n", words + 1);
    printf("Total number of characters : %d\n", characters);
}
