#include <stdio.h>
int sum(int a, int b);
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int total = sum(a, b);
    printf("Sum = %d", total);
}
int sum(int a, int b)
{
    int add = a + b;
    return add;
}