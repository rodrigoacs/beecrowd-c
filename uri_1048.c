#include <stdio.h>

int main()
{
    float salario, reajuste, percentual;

    scanf("%f", &salario);

    if (salario > 0.00 && salario <= 400.00)
    {
        percentual = 15.0;
        reajuste = (salario / 100) * percentual;
        salario += reajuste;
    }

    else if (salario > 400.01 && salario <= 800.00)
    {
        percentual = 12.0;
        reajuste = (salario / 100) * percentual;
        salario += reajuste;
    }

    else if (salario > 800.01 && salario <= 1200.00)
    {
        percentual = 10.0;
        reajuste = (salario / 100) * percentual;
        salario += reajuste;
    }

    else if (salario > 1200.01 && salario <= 2000.00)
    {
        percentual = 7.0;
        reajuste = (salario / 100) * percentual;
        salario += reajuste;
    }

    else if (salario > 2000.00)
    {
        percentual = 4.0;
        reajuste = (salario / 100) * percentual;
        salario += reajuste;
    }

    printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %.0f %%\n", salario, reajuste, percentual);

    return 0;
}
