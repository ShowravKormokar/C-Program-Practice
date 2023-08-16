#include <stdio.h>
int bigmod(int a, int p, int m);
int main()
{
    printf("%d", bigmod(5, 55, 231));

    return 0;
}

int bigmod(int a, int p, int m)
{
    if (p == 0)
        return 1;

    if (p % 2 == 0)
    {
        int c = bigmod(a, p / 2, m);
        return c * c % m;
    }
    else
        return (a * bigmod(a, p - 1, m) % m);
}