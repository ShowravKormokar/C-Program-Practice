#include<stdio.h>

int myFunc(int a);
int main()
{
    int n;
    printf("Enter a value: ");
    scanf("%d",&n);
    printf("%d",myFunc(n)); //Function call
    return 0;
}
int myFunc(int a)
{
    int i, b=0;
    for( i=2; i<=(a/i); i++)
    {
        if(a%i==0)b++;
    }
    if(b==0)
    {
        return 1;//Prime
    }
    else
        return 0;//Not prime
}
/* Prime Numbers 1 to 200-
2	3	5	7	11	13	17	19	23
29	31	37	41	43	47	53	59	61
67	71	73	79	83	89	97	101	103
107	109	113	127	131	137	139	149	151
157	163	167	173	179	181	191	193	197
199*/
