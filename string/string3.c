#include<stdio.h>
#include<string.h>

int main()
{
    char array[200];
    int i;
    printf("Enter a arraying: ");
    gets(array);

    for(i=0; array[i]!='\0'; i++)//capitalize first character of words
    {
        if(i==0)//check first character is lowercase alphabet
        {
            if((array[i]>='a') && (array[i]<='z'))
                array[i]= toupper(array[i]);
            continue;
        }
        else if(array[i]==' ')//check space
        {
            ++i;//space is found, check next character

            if(array[i]>='a' && array[i]<='z')//check next character is lowercase alphabet
            {
                array[i]= toupper(array[i]);
            }
            //else
            {
                if(array[i]>='A' && array[i]<='Z')//all other uppercase characters should be in lowercase
                    array[i]= tolower(array[i]);
            }
        }
    }
    printf("Capitalize arraying is: %s\n",array);

    return 0;
}
