#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct item
{
    char chave;
    struct item *proximo;
} Item;

typedef struct pilha
{
    struct item *topo;
    int tamMax, tamAtual;
} Pilha;

Item *criaItem(char chave)
{
    Item *i = (Item *)malloc(sizeof(Item));
    i->chave = chave;
    return i;
}

Pilha *criaPilha(int M)
{
    Pilha *p = (Pilha *)malloc(M * sizeof(Pilha));
    p->topo = NULL;
    p->tamMax = M;
    p->tamAtual = 0;
    return p;
}

void empilha(Pilha *p, Item *item)
{
    if (p->tamMax <= p->tamAtual)
    {
        return;
    }
    if (p->tamAtual == 0)
    {
        p->topo = item;
        p->tamAtual++;
        return;
    }
    item->proximo = p->topo;
    p->topo = item;
    p->tamAtual++;
    return;
}

void desempilha(Pilha *p)
{
    if (p->tamAtual == 0)
    {
        return;
    }
    Item *aux = p->topo;
    p->topo = p->topo->proximo;
    p->tamAtual--;
    free(aux);
    return;
}

int main()
{
    int N, dima = 0;
    char entrada[1001];
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        scanf("%s", entrada);
        Pilha *p = criaPilha(strlen(entrada));
        for (int j = 0; j < strlen(entrada); j++)
        {
            if (entrada[j] == '<')
            {
                Item *item = criaItem(entrada[j]);
                empilha(p, item);
            }
            //se a entrada for > e a pilha não estiver vazia 
            //significa que tem um < na pilha e o diamante ta completo
            if (entrada[j] == '>')
            {
                if (p->tamAtual != 0)
                {
                    desempilha(p);
                    dima++;
                }
            }
        }

        printf("%d\n", dima);
        dima = 0;

        for (int j = 0; j < strlen(entrada); j++)
        {
            desempilha(p);
        }
        free(p);
    }
    return 0;
}
