#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: \n");
    scanf("%d", &n);

    int a[n], i, j, temp;
    printf("Enter %d integers numbers: \n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] < a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("In desending order: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}