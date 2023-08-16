#include<stdio.h>
int main()
{
    int i, j=0,n;
    printf("Enter a number:\n");
    scanf("%d", &n);

    int array[n];
    printf("Enter %d integers numbers:\n", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &array[i]);

        if(array[i]>j)
        {
            j=array[i];
        }
    }
    printf("The biggest number is %d.\n", j);
}

