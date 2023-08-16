/*#include <stdio.h>
void fiboSeries(int *fs);

int main()
{
    int n;

    printf("Enter the number of terms: ");
    scanf("%d", &n);
    fiboSeries(&n);
    return 0;
}

void fiboSeries(int *fs)
{
    int i, x = 0, y = 1, a = x + y;

    for (i = 0; i < *fs; i++)
    {
        if (i == 0)
        {
            printf("Fibonacci Series: %d, ", x);
        }
        else if (i == 1)
        {
            printf("%d, ", y);
        }
        else
        {
            printf("%d, ", a);
            x = y;
            y = a;
            a = x + y;
        }
    }
}
*/
/*#include <stdio.h>
void fiboSeries(int fs);

int main()
{
    int n;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    fiboSeries(n);
}

void fiboSeries(int fs)
{
    int i, x = 0, y = 1, a = x + y;

    for (i = 0; i < fs; i++)
    {
        if (i == 0)
        {
            printf("Fibonacci Series: %d, ", x);
        }
        else if (i == 1)
        {
            printf("%d, ", y);
        }
        else
        {
            printf("%d, ", a);
            x = y;
            y = a;
            a = x + y;
        }
    }
}
*/
#include <stdio.h>
int main()
{
    float i, n, x = 0, y = 1, temp;

    printf("Enter the number of terms: ");
    scanf("%f", &n);
    printf("Fibonacci series: ");
    for (i = 1; i <= n; i++)
    {
        printf("%g, ", x);
        temp = x + y;
        x = y;
        y = temp;
    }
    return 0;
}
