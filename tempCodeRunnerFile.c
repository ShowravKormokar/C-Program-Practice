#include <stdio.h>
#include <conio.h>

int main()
{
    int i;
    double temp = 1;

    for (i = 2; i <= 50; i++)
    {
        temp *= 2;
        printf("%d. %0.0lf\n", i, temp);
    }
}
