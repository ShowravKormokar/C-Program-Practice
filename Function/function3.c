#include<stdio.h>

void saychar(char a);
int main()
{
    char r;
    scanf("%c",&r);
    saychar(r);
    return 0;
}
void saychar(char a)
{
    if(a>='a'&&a<='z')printf("Small letter\n");
    else if(a>='A'&&a<='Z')printf("Capital Letter\n");
    else if(a>='0'&&a<='9')printf("Digit\n");
    else printf("Special Symbol\n");
}

/*Write a function that has one character argument and displays that it’s a small letter, capital
letter, a digit or a special symbol.

#include<stdio.h>
char slType(char sml);
char upType(char cal);
char diType(char num);
char otType(char sps);

int main()
{
    char ch;
    printf("Enter an input: ");
    scanf("%c", &ch);
    printf("%c is lowercase.\n", slType(ch));
    printf("%c is uppercase.\n", upType(ch));
    printf("%c is digit.\n", diType(ch));
    printf("%c is special symbol.\n",otType(ch));
    return 0;
}
char slType(char sml)
{
    if(sml>='a' && sml<='z')
    {
        return sml;
    }
}
char upType(char cal)
{
    if(cal>='A' && cal<='Z')
    {
        return cal;
    }
}
char diType(char num)
{
    if(num>='0' && num<='9')
    {
        return num;
    }
}
char otType(char sps)
{
    return sps;
}
*/
