#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: \n");
    scanf("%d", &n);

    int a[n], i, j;
    printf("Enter %d integers numbers: \n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] > j)
            j = a[i];
    }
    printf("The biggest number is: %d\n", j);
}