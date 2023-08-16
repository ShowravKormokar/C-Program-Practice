#include <stdio.h>
#include <string.h>

int main()
{
    char str[500];
    printf("Enter any string: ");
    gets(str);

    for(int i=0; str[i]; i++)
    {
        if((str[i]>='a') && (str[i]<='z'))
        {
            str[i]-=32;//uppercase
        }
        else if((str[i]>='A') && (str[i]<='Z'))
        {
            str[i]+=32;//lowercase
        }
        else if((str[i]>='0') && (str[i]<='9'))
        {
            str[i]='#';
        }
        else// if (str[i]!=' ')
            {
            str[i]='%';
        }
    }
    puts(str);
    return 0;
}
