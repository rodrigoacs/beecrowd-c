#include <stdio.h>

int main()
{
    double N;
    int a, b, c, d, e, f, g, h, i, j, k, l;
    scanf("%lf", &N);
    a = N / 100;
    N = N - (a * 100);
    b = N / 50;
    N = N - (b * 50);
    c = N / 20;
    N = N - (c * 20);
    d = N / 10;
    N = N - (d * 10);
    e = N / 5;
    N = N - (e * 5);
    f = N / 2;
    N = N - (f * 2);

    N = N * 100;
    g = N / 100;
    N = N - (g * 100);
    h = N / 50;
    N = N - (h * 50);
    i = N / 25;
    N = N - (i * 25);
    j = N / 10;
    N = N - (j * 10);
    k = N / 5;
    N = N - (k * 5);
    l = N / 1;
    N = N - (l * 1);

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", a);
    printf("%d nota(s) de R$ 50.00\n", b);
    printf("%d nota(s) de R$ 20.00\n", c);
    printf("%d nota(s) de R$ 10.00\n", d);
    printf("%d nota(s) de R$ 5.00\n", e);
    printf("%d nota(s) de R$ 2.00\n", f);

    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", g);
    printf("%d moeda(s) de R$ 0.50\n", h);
    printf("%d moeda(s) de R$ 0.25\n", i);
    printf("%d moeda(s) de R$ 0.10\n", j);
    printf("%d moeda(s) de R$ 0.05\n", k);
    printf("%d moeda(s) de R$ 0.01\n", l);

    return 0;
}
