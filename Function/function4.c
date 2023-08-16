#include <stdio.h>

int main()
{
    int n;
    printf("Enter a value: \n");
    scanf("%d",&n);
    int result= sum(n);//function call
    int ave = average(n);//function call
    printf("Sum= %d , Average= %d",result,ave);

    return 0;
}
int sum(int n)//function pototype
{
    int i,sum=0;
    for(i=1; i<=n; i++)
    {
        if(i%2!=0)
        {
            sum+=i;
        }
    }
    return sum;
}
int average(int n)//function pototype
{
    int i,x=0,y=0;

    for(i=1; i<=n; i++)
    {
        if(i%2!=0)
        {
            y+=i;
            x++;
        }
    }
    return y/x;
}



/*#include<stdio.h>

void myFunc(int a);
int main(){
int r;
scanf("%d",&r);
myFunc(r);
return 0;
}
void myFunc(int a){
float b=0,c=0;
for(int i=1;i<=a;i++){
if(i&1){b+=i;c++;}
}
printf("Sum: %d\nAverage: %g",(int)b,b/c);
}
*/
