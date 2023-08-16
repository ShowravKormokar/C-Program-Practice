#include<stdio.h>
#include<string.h>
int main()
{
    char line[200];
    int i, v=0, c =0, d =0, s =0;

    printf("Enter any string: ");
    gets(line);

    for (i = 0; line[i]; i++)
    {

        line[i] = tolower(line[i]);

        if (line[i] == 'a' || line[i] == 'e' || line[i] == 'i' ||// check if the character is a vowel
                line[i] == 'o' || line[i] == 'u')
        {
            v++;
        }

        else if ((line[i] >= 'a' && line[i] <= 'z')) // if it is not a vowel and if it is an alphabet, it is a c
        {
            c++;
        }

        else if (line[i] >= '0' && line[i] <= '9')
        {
            d++;
        }

        else
        {
            s++;
        }
    }

    printf("Vowels: %d\nConsonants: %d\nDigits: %d\nSpecial_symbols: %d", v, c,d,s);
    //printf("\nConsonants: %d", c);
    //printf("\nDigits: %d", d);
    //printf("\nSpecial_symbols: %d", s);

    return 0;
}
