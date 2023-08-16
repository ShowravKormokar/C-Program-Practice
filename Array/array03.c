
/* WAP to input the values in a two dimensional
   array of integers and display the values. */

#include<stdio.h>
int main()
{
    int r,c,i,j;
    printf("Enter a rows and columns:\n");
    scanf("%d %d", &r,&c);
    int array[r][c];
    printf("Enter a numbers:\n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            scanf("%d", &array[i][j]);
        }
    }
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("array[%d][%d]=%d\n", i, j, array[i][j]);
        }
    }
    return 0;
}

