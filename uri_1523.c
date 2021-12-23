#include <stdio.h>
#include <stdlib.h>

typedef struct carro
{
    int C[100000], S[100000];
} Carro;

int main()
{
    int N, K, vagas;
    Carro *c = (Carro *)malloc(sizeof(Carro));
    while (1)
    {
    read:
        scanf("%d %d", &N, &K);
        vagas = 0;

        if (!N && !K)
        {
            break;
        }

        for (int i = 0; i < N; i++)
        {
            scanf("%d %d", &c->C[i], &c->S[i]);
        }

        for (int i = 0; i < N; i++)
        {
            for (int j = i; j < N; j++)
            {
                if (c->S[i] < c->S[j]) // verifica se o horario de saida do carro i é menor que de algum outro depois dele
                {
                    if (c->S[i] > c->C[j]) // verifica se j chega depois de i para i poder sair primeiro
                    {
                        printf("Nao\n");
                        goto read;
                    }
                }
            }
        }

        // comparar o horario de entrada do atual com a saida do anterior
        for (int i = 0; i < N; i++)
        {
            if (c->C[i + 1] == 0 && c->S[i + 1] == 0)
            {
                if (c->C[i] > c->C[i - 1] && c->S[i] < c->S[i - 1])
                {
                    vagas++;
                    if (vagas > K)
                    {
                        goto nao;
                    }
                }
            }

            if (c->C[i] < c->C[i + 1] && c->S[i] > c->S[i + 1])
            {
                vagas++;
                if (c->C[i] >= c->S[i - 1] && c->C[i - 1] != 0) // arruma caso 4
                {
                    vagas--;
                }
            }
        }
        if (vagas >= K)
        {
        nao:
            printf("Nao\n");
            goto read;
        }
    sim:
        printf("Sim\n");
    }

    return 0;
}