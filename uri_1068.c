#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
    char *expressao;
    int qtdeAbre, qtdeFecha;
    int posicoesAbre[1000], posicoesFecha[1000];
} Express;

Express contaAberto(Express *exp)
{
    exp->qtdeAbre = 0;
    for (int i = 0; i < strlen(exp->expressao); i++)
    {
        if (exp->expressao[i] == '(')
        {
            exp->posicoesAbre[exp->qtdeAbre] = i;
            exp->qtdeAbre++;
        }
    }
    return *exp;
}

Express contaFechado(Express *exp)
{
    exp->qtdeFecha = 0;
    for (int i = 0; i < strlen(exp->expressao); i++)
    {
        if (exp->expressao[i] == ')')
        {
            exp->posicoesFecha[exp->qtdeFecha] = i;
            exp->qtdeFecha++;
        }
    }
    return *exp;
}

int verificador(Express *exp)
{
    contaAberto(exp);
    contaFechado(exp);
    if (exp->qtdeFecha != exp->qtdeAbre)
    {
        return 0;
    }

    for (int i = 0; i < exp->qtdeAbre; i++)
    {
        for (int j = 0; j < exp->qtdeAbre; j++)
        {
            if (exp->posicoesAbre[i] > exp->posicoesFecha[i])
            {

                return 0;
            }
        }
    }
    return 1;
}

int main()
{
    Express *a = (Express *)malloc(sizeof(Express));
    a->expressao = (char *)malloc(sizeof(char));
    while (1)
    {
        scanf("%s", a->expressao);
        if (feof(stdin))
            break;
        if (verificador(a) == 0)
        {
            printf("incorrect\n");
        }
        else
        {
            printf("correct\n");
        }
    }

    return 0;
}
