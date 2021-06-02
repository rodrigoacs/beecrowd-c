#include <stdio.h>

int main()
{
    char name[64];
    double fix_salary, sell, total;
    fgets(name, sizeof(name), stdin);
    scanf("%lf %lf", &fix_salary, &sell);
    total = fix_salary + ((sell / 100) * 15);
    printf("TOTAL = R$ %.2lf\n", total);
    return 0;
}
