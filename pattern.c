#include <stdio.h>
int main()
{
    int i, j, r, c;
    scanf("%d %d", &r, &c);

    for (i = 1; i <= r; i++) // Row
    {
        for (j = 1; j <= c; j++) // Column
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}