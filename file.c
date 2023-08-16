#include <stdio.h>
int main()
{

    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    int input;
    scanf("%d", &input);
    printf("The answer is: %d\n", input + 4);
    return 0;
}