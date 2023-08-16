#include <stdio.h>

void swapbyadrs(int *a, int *b);
void swapbyvalue(int a, int b);
int main()
{
    int x, y;
    scanf("%d%d", &x, &y);
    swapbyvalue(x, y);
    swapbyadrs(&x, &y);
    printf("Swaped value by addresses: %d %d\n", x, y);

    return 0;
}
void swapbyadrs(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
void swapbyvalue(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    printf("Swapped values by values: %d %d\n", a, b);
}
