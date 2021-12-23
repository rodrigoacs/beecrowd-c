#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct no
{
    struct no *esq;
    struct no *dir;
    int chave;
} No;

typedef struct arvore
{
    No *raiz;
} Arvore;

Arvore *criaArvore()
{
    Arvore *A = (Arvore *)malloc(sizeof(Arvore));
    A->raiz = NULL;
    return A;
}

No *criaNo(int chave)
{
    No *no = (No *)malloc(sizeof(No));
    no->esq = NULL;
    no->dir = NULL;
    no->chave = chave;
    return no;
}

No *insere(No *raiz, int chaveNova)
{
    if (raiz == NULL)
    {
        No *no = criaNo(chaveNova);
        return no;
    }
    if (raiz->chave > chaveNova)
    {
        raiz->esq = insere(raiz->esq, chaveNova);
    }
    if (raiz->chave < chaveNova)
    {
        raiz->dir = insere(raiz->dir, chaveNova);
    }
    return raiz;
}

No *busca(No *raiz, int chave)
{
    if (raiz == NULL)
    {
        printf("%d nao existe\n", chave);
        return raiz;
    }
    if (raiz->chave == chave)
    {
        printf("%d existe\n", chave);
        return raiz;
    }
    if (chave < raiz->chave)
    {
        return busca(raiz->esq, chave);
    }
    if (chave > raiz->chave)
    {
        return busca(raiz->dir, chave);
    }
    return raiz;
}

void preOrdem(No *no)
{
    if (no == NULL)
        return;
    printf("%d ", no->chave);
    preOrdem(no->esq);
    preOrdem(no->dir);
}

void posOrdem(No *no)
{
    if (no == NULL)
        return;
    posOrdem(no->esq);
    posOrdem(no->dir);
    printf("%d ", no->chave);
}

void ordemCentral(No *no)
{
    if (no == NULL)
        return;
    ordemCentral(no->esq);
    printf("%d ", no->chave);
    ordemCentral(no->dir);
}

int main()
{
    int chave;
    char operacao[7];
    Arvore *A = criaArvore();
    while (1)
    {
        scanf("%s", operacao);
        if (feof(stdin))
            break;
        if (strcmp(operacao, "I") == 0)
        {
            scanf("%d", &chave);
            A->raiz = insere(A->raiz, chave);
        }
        if (strcmp(operacao, "INFIXA") == 0)
        {
            ordemCentral(A->raiz);
            printf("\n");
        }
        if (strcmp(operacao, "PREFIXA") == 0)
        {
            preOrdem(A->raiz);
            printf("\n");
        }
        if (strcmp(operacao, "POSFIXA") == 0)
        {
            posOrdem(A->raiz);
            printf("\n");
        }
        if (strcmp(operacao, "P") == 0)
        {
            scanf("%d", &chave);
            busca(A->raiz, chave);
        }
        if (strcmp(operacao, "R") == 0)
        {
            scanf("%d", &chave);
            treeDelete(A->raiz, chave);
        }
    }
}
