#include<stdio.h>
int main()
{
    int i, j, k, n, a;
    printf("Enter the number of elements in array\n");
    scanf("%d", &n);

    int array[n];
    printf("Enter %d integers numbers:\n", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &array[i]);
    }
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(array[i]<array[j])
            {
                a=array[i];
                array[i]=array[j];
                array[j]=a;
            }
        }
    }
    printf("In descending order:");
    for(i=0; i<n; i++)
    {
        printf("%d ", array[i]);
    }
    return 0;
}
