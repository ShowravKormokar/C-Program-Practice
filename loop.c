// #include <stdio.h>
// #include <conio.h>

// int main()
// {
//     float a;
//     printf("Enter a value:");
//     scanf("%g", &a);
//     if (a > 0)
//         printf("%g is a Positive number.", a);
//     else
//         printf("%g is a Negetive number.", a);

//     getch();
// }

// #include <stdio.h>

// int main()
// {
//     int x;
//     printf("Enter the value:");
//     scanf("%d", &x);

//     if (x % 2 == 0)
//         printf("%d is an Even number.", x);
//     else
//         printf("%d is an Odd number.", x);

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     float x, y;
//     printf("Enter the value of x and y:");
//     scanf("%g %g", &x, &y);

//     if (x > y)
//         printf("%g is a Largest number.", x);
//     else
//         printf("%g is a Largest number.", y);

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     float a, b, c;
//     printf("Enter the value of a, b and c: ");
//     scanf("%g %g %g", &a, &b, &c);

//     if ((a > b) && (a > c))
//         printf("%g is a Largest number.", a);
//     else if ((b > c) && (b > c))
//         printf("%g is a Largest number.", b);
//     else
//         printf("%g is Largest number.", c);

//     return 0;
// }

#include <stdio.h>
#include <conio.h>

int main()
{
    int s;
    printf("Enter your score: ");
    scanf("%d", &s);

    if ((s >= 80) && (s <= 100))
        printf("Your grade is A+");
    else if ((s >= 70) && (s <= 79))
        printf("Your grade is A");
    else if ((s >= 60) && (s <= 69))
        printf("Your grade is A-");
    else if ((s >= 50) && (s <= 59))
        printf("Your grade is B");
    else if ((s >= 40) && (s <= 49))
        printf("Your grade is C");
    else if ((s >= 33) && (s <= 39))
        printf("Your grade is D");
    else
        printf("Your grade is F");

    return 0;
}