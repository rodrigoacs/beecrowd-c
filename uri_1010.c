#include <stdio.h>

int main()
{
    int cod1, n1, cod2, n2;
    double value1, value2, total;
    scanf("%d %d %lf", &cod1, &n1, &value1);
    scanf("%d %d %lf", &cod2, &n2, &value2);
    total = (n1 * value1) + (n2 * value2);
    printf("VALOR A PAGAR: R$ %.2lf\n", total);

    return 0;
}
