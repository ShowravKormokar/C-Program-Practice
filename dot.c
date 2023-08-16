#include <stdio.h>
int main()
{
    int d, sum = 0;
    printf("Enter Dimention: ");
    scanf("%d", &d);
    int a[d], b[d];
    for (int i = 0; i < d; i++)
    {
        printf("Enter 1st vector\'s %dth element:\n", i + 1);
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < d; i++)
    {
        printf("Enter 2nd vector\'s %dth element:\n", i + 1);
        scanf("%d", &b[i]);
        sum += a[i] * b[i];
    }
    printf("Dot Product is: %d\n", sum);
    return 0;
}