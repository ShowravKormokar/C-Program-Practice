#include<stdio.h>
#include<string.h>
void myFunc(char a[]);

int main()
{
    char n[99];
    gets(n);
    myFunc(n);

    return 0;
}
void myFunc(char a[])
{
    int sum=0;
    int total=strlen(a);
    char b[99];
    for(int i=0; a[i]; i++)
    {
        switch(a[i])
        {
        case '1':
            sum+=1;
            break;
        case '2':
            sum+=2;
            break;
        case '3':
            sum+=3;
            break;
        case '4':
            sum+=4;
            break;
        case '5':
            sum+=5;
            break;
        case '6':
            sum+=6;
            break;
        case '7':
            sum+=7;
            break;
        case '8':
            sum+=8;
            break;
        case '9':
            sum+=9;
            break;
        }
    }
    printf("Sum: %d\n",sum);
    printf("Digit Numbers: %d\n",total);
}
