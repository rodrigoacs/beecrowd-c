#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct item
{
    int chave;
    struct item *proximo;
    struct item *anterior;
} Item;

typedef struct pilha
{
    struct item *topo;
    int tamMax, tamAtual;
} Pilha;

typedef struct fila
{
    struct item *comeco, *final;
    int tamMax, tamAtual;
} Fila;

Item *criaItem(int chave)
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
        printf("TAD Cheia\n");
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
        printf("TAD Vazia\n");
        return;
    }
    printf("%d\n", p->topo->chave);
    Item *aux = p->topo;
    p->topo = p->topo->proximo;
    p->tamAtual--;
    free(aux);
    return;
}

Fila *criaFila(int M)
{
    Fila *f = (Fila *)malloc(M * sizeof(Fila));
    f->comeco = NULL;
    f->tamMax = M;
    f->tamAtual = 0;
    return f;
}
void enfilera(Fila *f, Item *item)
{
    if (f->tamMax == f->tamAtual)
    {
        printf("TAD Cheia\n");
        return;
    }
    if (f->tamAtual == 0)
    {
        f->comeco = item;
        f->final = item;
        f->tamAtual++;
        return;
    }
    f->final->anterior = item;
    f->final = item;
    f->tamAtual++;
    return;
}
void desenfilera(Fila *f)
{
    if (f->tamAtual == 0)
    {
        printf("TAD Vazia\n");
        return;
    }
    Item *aux = f->comeco;
    printf("%d\n", f->comeco->chave);
    f->comeco = f->comeco->anterior;
    f->tamAtual--;
    free(aux);
    return;
}

int main()
{
    char entrada[7], tad[5];
    int chave, tamanho;
    while (1)
    {
        scanf("%s", tad);
        if (0 == strcmp(tad, "Pilha"))
        {
            scanf("%d", &tamanho);
            Pilha *p = criaPilha(tamanho);
            while (1)
            {
                scanf("%s %d", entrada, &chave);
                if (0 == strcmp(entrada, "INSERE"))
                {
                    Item *i = criaItem(chave);
                    empilha(p, i);
                }
                if (0 == strcmp(entrada, "REMOVE"))
                {
                    desempilha(p);
                }
                if (0 == strcmp(entrada, "Sair"))
                {
                    free(p);
                    return 0;
                }
            }
        }

        if (0 == strcmp(tad, "Fila"))
        {
            scanf("%d", &tamanho);
            Fila *f = criaFila(tamanho);
            while (1)
            {
                scanf("%s %d", entrada, &chave);
                if (0 == strcmp(entrada, "INSERE"))
                {
                    Item *i = criaItem(chave);
                    enfilera(f, i);
                }
                if (0 == strcmp(entrada, "REMOVE"))
                {
                    desenfilera(f);
                }
                if (0 == strcmp(entrada, "Sair"))
                {
                    free(f);
                    return 0;
                }
            }
        }
    }
    return 0;
}