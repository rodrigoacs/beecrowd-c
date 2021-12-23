#include <stdio.h>
#include <stdlib.h>

typedef struct item
{
    int valor;
    struct item *prox;
} Item;

typedef struct lista
{
    Item *inicio, *final;
} Lista;

void criaLista(Lista *L, int M)
{
    for (int i = 0; i < M; i++)
    {
        L[i].inicio = NULL;
        L[i].final = NULL;
    }
}

void insereItem(Lista *L, int endereco, int valor)
{
    Item *aux = (Item *)malloc(sizeof(Item));
    aux->valor = valor;
    aux->prox = NULL;
    if (L[endereco].inicio == NULL)
    {
        L[endereco].inicio = aux;
    }
    else
    {
        L[endereco].final->prox = aux;
    }
    L[endereco].final = aux;
}

int main()
{
    int casosTeste, M, C;
    scanf("%d", &casosTeste);
    for (int i = 0; i < casosTeste; i++)
    {
        scanf("%d %d", &M, &C);
        Lista L[M];
        criaLista(L, M);

        for (int j = 0; j < C; j++)
        {
            int valor;
            scanf("%d", &valor);
            insereItem(L, valor % M, valor);
        }

        for (int j = 0; j < M; j++)
        {
            Item *aux = L[j].inicio;
            printf("%d -> ", j);
            while (aux != NULL)
            {
                printf("%d -> ", aux->valor);
                aux = aux->prox;
            }
            printf("\\\n");
        }
        if (i < casosTeste - 1)
        {
            printf("\n");
        }
    }

    return 0;
}