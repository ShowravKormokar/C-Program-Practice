/*
 *
 * *
 * * *
 * * * *
 * * * * *

#include <stdio.h>
int main()
{
    int i, j, n;
    scanf("%d", &n);

    for (i = 1; i <= n; i++) // Row
    {
        for (j = 1; j <= i; j++) // Column
        {
            printf("* "); // For print A B C using : printf("%c ", 'A'+j-1);
        }
        printf("\n");
    }
    return 0;
}
*/
/*
 * * * * *
 * * * *
 * * *
 * *
 *

#include <stdio.h>
int main()
{
    int i, j, k;

    for (i = 1; i <= 5; i++)
    {
        for (j = i; j <= 5; j++)
        {
            printf("* "); // For print A B C using : printf("%c ", 'A'+j-1);
        }
        printf("\n");
    }
    return 0;
}
 */
/*
_______ *
______* *
____* * *
_ * * * *
* * * * *


#include <stdio.h>
int main()
{
    int i, j, k, n;
    scanf("%d", &n);
    for (i = 1; i <= n; i++) // Row
    {
        for (j = i; j < n; j++) // Space
        {
            printf(" ");
        }
        for (k = 1; k <= i; k++) // Column
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
*/
/*
*****
_****
__***
___**
____*


#include <stdio.h>
int main()
{
    int i, j, k, n;
    scanf("%d", &n);
    for (i = n; i >= 1; i--)
    {
        for (j = i; j < n; j++)
        {
            printf(" ");
        }
        for (k = 1; k <= i; k++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
*/
/*
A
A B
A B C
A B C D
A B C D E

#include <stdio.h>
int main()
{
    int i, j, k;

    for (i = 1; i <= 5; i++) // Row
    {
        for (j = 1; j <= i; j++) // Column
        {
            printf("%c *", 'A' + j - 1);
        }
        printf("\n");
    }
    return 0;
}
*/
/*
A B C D E
A B C D
A B C
A B
A


#include <stdio.h>
int main()
{
    for (int i = 5; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%c ", 'A' + j - 1);
        }
        printf("\n");
    }

    return 0;
}

*/
/*
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15

#include <stdio.h>

int main()
{
    int i, j, k, n, sum = 1;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", sum++);
            // sum = sum + i;
        }
        printf("\n");
    }
}
*/
/*
1
0 1
1 0 1
0 1 0 1
1 0 1 0 1

#include <stdio.h>

int main()
{
    int i, j, n;
    scanf("%d", &n);
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            (i + j & 1) ? printf("0 ") : printf("1 ");
        }
        printf("\n");
    }
}
*/
/*
A
A B
A B C
A B C D
A B C D E

#include <stdio.h>

int main()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%c ", 'A' + j - 1);
        }
        printf("\n");
    }
}
*/