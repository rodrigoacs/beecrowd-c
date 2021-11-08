#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct item
{
    int chave;
    struct item *anterior;
} Item;

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
    Item *aux = f->comeco;
    f->comeco = f->comeco->anterior;
    f->tamAtual--;
    free(aux);
    return;
}

int main()
{
    int entrada;
    while (1)
    {
        scanf("%d", &entrada);
        if (entrada == 0)
        {
            break;
        }

        Fila *f = criaFila(entrada);
        for (int i = 0; i < entrada; i++)
        {
            Item *item = (Item *)malloc(sizeof(Item));
            item = criaItem(i + 1);
            enfilera(f, item);
        }

        printf("Discarded cards:");

        while (f->tamAtual >= 2)
        {
            if (f->tamAtual == 2)
            {
                printf(" %d", f->comeco->chave);
            }
            else
            {
                printf(" %d,", f->comeco->chave);
            }

            desenfilera(f);
            Item *item = (Item *)malloc(sizeof(Item));
            item = criaItem(f->comeco->chave);
            desenfilera(f);
            enfilera(f, item);
        }

        printf("\nRemaining card: %d\n", f->comeco->chave);
    }
    return 0;
}
