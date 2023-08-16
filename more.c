// -------------------------------------------- Input two value and calculate sum or sub ----------------------------- //

// #include <stdio.h>
// int main()
// {
//     int a, b, sum, sub;
//     printf("\nEnter two integer value: \n");
//     scanf("%d %d", &a, &b);
//     sum = a + b;
//     sub = a - b;
//     printf("The sum and sub of two number are: %d %d", sum, sub);
//     return 0;
// }

// ------------------------------- Program for show the word is Computer Science and Engenieering 5 times ------ //

// #include <stdio.h>
// #include <conio.h>
// int main()
// {
//     int i;
//     for (i = 1; i <= 5; i++)
//         printf("Computer Science and Engenieering\n");
//     getch();
// }

// --------------------------------- find the average of 3 number -------------------------------- //

// #include <stdio.h>
// #include <conio.h>
// int main()
// {
//     int a, b, c, avg;
//     printf("Enter the value of a:");
//     scanf("%d", &a);
//     printf("Enter the value of b:");
//     scanf("%d", &b);
//     printf("Enter the value of c:");
//     scanf("%d", &c);
//     avg = (a + b + c) / 3;
//     printf("avg = %d\n", avg);
//     getch();
// }

// ========================================================== Way-2 =============================//
// #include <stdio.h>
// #include <conio.h>
// int main()
// {
//     int a, b, c, avg;
//     printf("Enter the value of a, b, c:");
//     scanf("%d %d %d", &a, &b, &c);
//     avg = (a + b + c) / 3;
//     printf("avg = %d\n", avg);
//     getch();
// }

// ------------------------------------ Find the value of rectriangle ----------------------------- //

// #include <stdio.h>
// #include <conio.h>
// #include <math.h>
// float main()
// {
//     float b, h, area;
//     printf("Enter the value of Base and Hight:");
//     scanf("%f %f", &b, &h);
//     area = 0.5 * b * h;
//     printf("\nArea of triangle is = %f", area);
//     getch();
// }

// -------------------------- Find the of Circle -------------------------------- //

// #include <stdio.h>
// #include <conio.h>
// #define PI 3.14
// float main()
// {
//     float r, area;
//     printf("Enter value of radius:");
//     scanf("%f", &r);
//     area = PI * (r * r);
//     printf("\n Area of circle =%f", area);
//     getch();
// }

// ----------------------------- Variable diclaretion ------------------------- //

// #include <stdio.h>
// void myFunction(char name[], float age)
// {
//     printf("Hello %s. You are %f years old.\n", name, age);
// }

// int main()
// {
//     myFunction("Jenny", 14);
//     myFunction("Anja", 30);
//     return 0;
// }

// ------------------------- default program ------------------------------ //

#include <stdio.h>
#include <conio.h>
int main()
{
    int d;
    printf("Enter a number from 1 to 4:");
    scanf("%i", &d);
    putchar('\n');
    switch (d)

    {
    case 1:
        puts("You have a entered a number 1.");
        break;
    case 2:
        puts("You have a entered a number 2.");
        break;
    case 3:
        puts("You have a entered a number 3.");
        break;
    case 4:
        puts("You have a entered a number 4.");
        break;
    default:
        puts("Enter a valid number. Try again.");
    }
}