#include <stdio.h>
#include <stdlib.h>

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

No *cria_no(int chave)
{
    No *n = (No *)malloc(sizeof(No));
    n->esq = NULL;
    n->dir = NULL;
    n->chave = chave;
    return n;
}

No *insere(No *raiz, int chaveNova)
{
    if (raiz == NULL)
    {
        No *novo_no = cria_no(chaveNova);
        return novo_no;
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

void preOrdem(No *no)
{
    if (no == NULL)
        return;
    printf(" %d", no->chave);
    preOrdem(no->esq);
    preOrdem(no->dir);
}

void posOrdem(No *no)
{
    if (no == NULL)
        return;
    posOrdem(no->esq);
    posOrdem(no->dir);
    printf(" %d", no->chave);
}

void ordemCentral(No *no)
{
    if (no == NULL)
        return;
    ordemCentral(no->esq);
    printf(" %d", no->chave);
    ordemCentral(no->dir);
}

int main()
{
    int C, N;
    scanf("%d", &C);
    for (int i = 0; i < C; i++)
    {
        printf("Case %d:\n", i + 1);
        Arvore *A = criaArvore();
        scanf("%d", &N);
        for (int j = 0; j < N; j++)
        {
            int novoNo;
            scanf("%d", &novoNo);
            A->raiz = insere(A->raiz, novoNo);
        }
        printf("Pre.:");
        preOrdem(A->raiz);
        printf("\n");
        printf("In..:");
        ordemCentral(A->raiz);
        printf("\n");
        printf("Post:");
        posOrdem(A->raiz);
        printf("\n\n");
        
    }
}