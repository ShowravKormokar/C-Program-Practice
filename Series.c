/*
1 1 2 3 5 8 13 21 34 55

#include <stdio.h>

int main()
{
    int i, n, c, a = 1, b = 0;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
        printf("%d, ", c);
    }
}
*/

/*
2 4 8 16 32 64 128 256 512 1024

#include <stdio.h>

int main()
{
    int i, a = 2;
    for (i = 1; i <= 10; i++)
    {
        printf("%d, ", a);
        a = a * 2;
    }
}
*/
/*
1 4 7 10 13 16 19 22 25 28 31 34 37 40
*/
#include <stdio.h>
int main()
{
    int i;
    for (i = 1; i <= 50; i++)
    {
        printf("%d, ", i);
        i = i + 2;
    }
}

/*
1 -4 7 -10 13 -16 19 -22 25 -28 31 -34 37 -40

#include <stdio.h>

int main()
{
    int i;
    for (i = 1; i <= 50; i++)
    {
        (i & 1) ? printf("%d ", i) : printf("%d ", i * -1);
        i = i + 2;
    }
}
*/
/*
5. 1 5 13 25 41 61 85 113 145 181

#include <stdio.h>
int main()
{
    int i, j, n = 1, a = 4;
    for (i = 1; i <= 10; i++)
    {
        printf("%d ", n);
        j = a * i;
        n = n + j;
    }
}
*/
/*
6. (1)+(1+2)+(1+2+3)+(1+2+3+4)+(1+2+3+4+5)

#include <stdio.h>
int main()
{
    int a = 1, b = 4, n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("(");
        for (int j = 1; j <= i; j++)
        {
            (j == i) ? printf("%d", j) : printf("%d+", j);
        }
        (i == n) ? printf(")") : printf(")+");
    }
}
*/
/*
7. (2)+(2+4)+(2+4+6)+(2+4+6+8)+(2+4+6+8+10)

#include <stdio.h>

int main()
{
    int a = 1, b = 4, n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("(");
        for (int j = 1; j <= i; j++)
        {
            (j == i) ? printf("%d", j * 2) : printf("%d+", j * 2);
        }

        (i == n) ? printf(")") : printf(")+");
    }
    return 0;
}
*/
/*
8. (1)+(1+3)+(1+3+5)+(1+3+5+7)+(1+3+5+7+9)

#include <stdio.h>

int main()
{
    int a, n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        a = -1;
        printf("(");
        for (int j = 1; j <= i; j++)
        {
            (j == i) ? printf("%d", a + 2) : printf("%d+", a + 2);
            a += 2;
        }

        (i == n) ? printf(")") : printf(")+");
    }
    return 0;
}
*/
/*
9. (1^2)+(1^2+3^2)+(1^2+3^2+5^2)+(1^2+3^2+5^2+7^2)+(1^2+3^2+5^2+7^2+9^2)

#include <stdio.h>

int main()
{
    int a, n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {

        a = -1;
        printf("(");
        for (int j = 1; j <= i; j++)
        {
            (j == i) ? printf("%d^2", a + 2) : printf("%d^2+", a + 2);

            a += 2;
        }

        (i == n) ? printf(")") : printf(")+");
    }

    return 0;
}
*/
/*
10. (2^2)+(2^2+4^2)+(2^2+4^2+6^2)+(2^2+4^2+6^2+8^2)+(2^2+4^2+6^2+8^2+10^2)

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("(");
        for (int j = 1; j <= i; j++)
        {
            (j == i) ? printf("%d^2", j * 2) : printf("%d^2+", j * 2);
        }

        (i == n) ? printf(")") : printf(")+");
    }
    return 0;
}
*/