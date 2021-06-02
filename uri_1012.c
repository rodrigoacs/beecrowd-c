#include <stdio.h>

int main()
{
    double A, B, C, tria, circ, trap, quad, reta, pi;
    scanf("%lf %lf %lf", &A, &B, &C);
    pi = 3.14159;
    tria = (A * C) / 2;
    circ = pi * (C * C);
    trap = ((A + B) * C) / 2;
    quad = B * B;
    reta = A * B;
    printf("TRIANGULO: %.3lf\n", tria);
    printf("CIRCULO: %.3lf\n", circ);
    printf("TRAPEZIO: %.3lf\n", trap);
    printf("QUADRADO: %.3lf\n", quad);
    printf("RETANGULO: %.3lf\n", reta);

    return 0;
}
