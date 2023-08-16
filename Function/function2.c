#include<stdio.h>
double pi();
double cirArea(double r);

int main()
{
    double a,b;
    printf("Enter a radius: ");
    scanf("%lf", &a);
    printf("Area: %g", cirArea(a));
    return 0;
}

double pi()
{
    return 3.1416;
}
double cirArea(double r)
{
    return pi()*r*r;
}
/*#include<stdio.h>
#define pi 3.1416
double sayarea(double a);
int main(){
double r;
scanf("%lf",&r);
printf("%lf",sayarea(r));
return 0;
}
double sayarea(double a){

    return pi*a*a;
}*/
