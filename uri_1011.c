#include <stdio.h>

int main()
{
    double V, R, pi;
    scanf("%lf", &R);
    pi = 3.14159;
    V = (4 / 3.0) * pi * (R * R * R);
    printf("VOLUME = %.3lf\n", V);

    return 0;
}
