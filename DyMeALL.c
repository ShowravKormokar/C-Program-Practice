#include <stdlib.h>
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int *p;
    p = (int *)malloc(n);
    if (p == NULL)
    {
        printf("Memory not allocated\n");
        exit(0);
    }
}