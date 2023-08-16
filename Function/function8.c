/*#include <stdio.h>

int a (int);

int main()
{
    int n;
    printf("Enter limit: ");
    scanf("%d", &n);
    printf("Avarge for %d is %d", n, a(n));
    return 0;
}

int a(int n)
{
    if(n==1)
        return 2;
    else if(n==2)
        return 1;
    else if (n%2 ==0 && n>2)
        return a(n-1)-1;
    else
        return a(n-1)+3;
}*/
#include<stdio.h>

double avg(int a,int b);
int main()
{
    int x;
    scanf("%d",&x);
    printf("%lf\n",avg(x,x));
    return 0;
}
double avg(int a,int b)
{
    if(a==1) return a;
    return (a+avg(a-1,1))/b;
}
