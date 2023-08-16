#include <stdio.h>
int main()
{
    int a = 10, b = 5;
    int *p = &a, *q = &b;
    printf("%d", *p * *q);
}

/*#include <stdio.h>
int main()
{
    int myAge = 21;
    int *ptr = myAge;

    // Output the value of myAge (43)
    printf("%d\n", myAge);

    // Output the memory address of myAge (0x7ffe5367e044)
    printf("%p\n", &myAge);

    // Output the memory address of myAge with the pointer (0x7ffe5367e044)
    printf("%p\n", ptr);
    printf("%p\n", *ptr);
    printf("%d\n", *ptr);
}*/