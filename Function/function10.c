#include <stdio.h>

void myFunc(char a[]);
int main()
{
    char input[100];
    gets(input);

    myFunc(input);
    return 0;
}
void myFunc(char a[])
{
    int i;
    for (i = 0; a[i]; i++)
    {
        if (a[0] >= 'a' && a[0] <= 'z')
        {
            a[0] -= 32;
        }
        else if (a[i] == ' ')
        {
            i++;
            if (a[i] >= 'a' && a[i] <= 'z')
            {
                a[i] -= 32;
            }
        }
    }
    puts(a);
}
