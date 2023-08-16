#include <stdio.h>
int main()
{
    int mat[2][6], i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 6; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 6; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

// Multiplicate by N:
/*#include <stdio.h>
int main()
{
    int i, j, N, r, c;
    printf("Enter a matrix order (row by col):\n");
    scanf("%d %d", &r, &c);
    printf("Enter a multiplication number:\n");
    scanf("%d", &N);
    int A[r][c];
    printf("Enter an elements:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    int B[r][c];
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            B[r][c] = N * A[i][j];
            printf("%d ", B[r][c]);
        }
        printf("\n");
    }
}
*/
/*
#include<stdio.h>
int main()
{
    int i,j,k,r1,r2,c1,c2,r3,c3;
    printf("Enter rows and column for first matrix: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and column for second matrix: ");
    scanf("%d %d", &r2, &c2);

    if(c1!=r1)
    {
        printf("Wrong! Please, enter a correct order.\n");
    }
    else
    {
        //Input First Matrix
        int A[r1][c1];
        printf("Enter an elements for first matrix:\n");
        for(i=0; i<r1; i++)
        {
            for(j=0; j<c1; j++)
            {
                printf("First [%d][%d]= ",i,j);
                scanf("%d", &A[i][j]);
            }
        }
        //Input Second Matrix
        int B[r2][c2];
        printf("Enter an elements for first matrix:\n");
        for(i=0; i<r2; i++)
        {
            for(j=0; j<c2; j++)
            {
                printf("Second [%d][%d]= ",i,j);
                scanf("%d", &B[i][j]);
            }
        }
        int C[r1][c2];
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                C[i][j]=0;
            }
        }
        for(i=0; i<r1; i++)
        {
            for(j=0; j<c2; j++)
            {
                for(k=0; k<r2; k++)
                {
                    //printf("%d  ", C[i][j]);
                    C[i][j]+=A[i][k]*B[k][j];
                }
            }
        }
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                printf("%d  ", C[i][j]);
            }
            printf("\n");
        }

    }
    return 0;
}

*/