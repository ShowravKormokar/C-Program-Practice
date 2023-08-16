#include <stdio.h>

int main()
{
    float a, b;
    scanf("%f %f", &a, &b);

    printf("Addition: %g + %g = %g\n", a, b, a + b);
    printf("Subtraction: %f - %f = %f\n", a, b, a - b);
    printf("Multiplication: %f * %f = %f\n", a, b, a * b);
    printf("Division: %f / %f = %f\n", a, b, a / b);
    printf("Remainder: %f %% %f = %f\n", a, b, fmod(a, b));

    return 0;
}

// #include <stdio.h>

// int main()
// {
//     int a, b;
//     scanf("%f %f", &a, &b);

//     printf("Addition: %f + %f = %f", a, b, a + b);

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     double a, b;

//     int n = (int)(a + b) % 4;

//     scanf("%%f %%f", &a, &b);
//     printf("Sum: %%f + %%f = %%f\n", a, b, a + b);
//     printf("Remin:%f", n);

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     double d = 7.5;
//     int i = 3;
//     int n = (int)(d + i) % 4;
//     printf("%f", n);

//     return 0;
// }

// ===========Printing using %f 123.450000;   Printing using %e 1.234500e+02;   Printing using %g 123.45

// #include <stdio.h>
// #include <math.h>

// int main()
// {
//     double a, b;
//     scanf("%g %g", &a, &b);

//     printf("Addition: %g + %g = %g\n", a, b, a + b);
//     printf("Subtraction: %g - %g = %g\n", a, b, a - b);
//     printf("Multiplication: %g * %g = %g\n", a, b, a * b);
//     printf("Division: %g / %g = %g\n", a, b, a / b);

//     printf("Remainder: %g %% %g = %g\n", a, b, fmod(a, b));

//     return 0;
// }