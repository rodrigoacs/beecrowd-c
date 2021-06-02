#include <stdio.h>

int main()
{
    int X, Y;
    double r;
    scanf("%d %d", &X, &Y);
    if (X == 1)
    {
        r = Y * 4.0;
        printf("Total: R$ %.2lf\n", r);
    }
    if (X == 2)
    {
        r = Y * 4.5;
        printf("Total: R$ %.2lf\n", r);
    }
    if (X == 3)
    {
        r = Y * 5.0;
        printf("Total: R$ %.2lf\n", r);
    }
    if (X == 4)
    {
        r = Y * 2.0;
        printf("Total: R$ %.2lf\n", r);
    }
    if (X == 5)
    {
        r = Y * 1.5;
        printf("Total: R$ %.2lf\n", r);
    }
    return 0;
}
