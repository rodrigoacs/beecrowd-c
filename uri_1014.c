#include <stdio.h>

int main()
{
    int X;
    double Y, r;
    scanf("%d %lf", &X, &Y);
    r = X / Y;
    printf("%.3lf km/l\n", r);

    return 0;
}
