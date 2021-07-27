#include <stdio.h>
#include <string.h>

int main()
{
    char esq[128], esp[128], ali[128], vertebrado[128] = {"vertebrado"}, invertebrado[128] = {"invertebrado"}, ave[128] = {"ave"}, mamifero[128] = {"mamifero"}, inseto[128] = {"inseto"}, anelideo[128] = {"anelideo"}, carnivoro[128] = {"carnivoro"}, onivoro[128] = {"onivoro"}, herbivoro[128] = {"herbivoro"}, hematofago[128] = {"hematofago"};

    scanf(" %s", esq);
    scanf(" %s", esp);
    scanf(" %s", ali);

    if (0 == strcmp(esq, vertebrado) && 0 == strcmp(esp, ave) && 0 == strcmp(ali, carnivoro))
    {
        printf("aguia\n");
    }

    if (0 == strcmp(esq, vertebrado) && 0 == strcmp(esp, ave) && 0 == strcmp(ali, onivoro))
    {
        printf("pomba\n");
    }

    if (0 == strcmp(esq, vertebrado) && 0 == strcmp(esp, mamifero) && 0 == strcmp(ali, onivoro))
    {
        printf("homem\n");
    }

    if (0 == strcmp(esq, vertebrado) && 0 == strcmp(esp, mamifero) && 0 == strcmp(ali, herbivoro))
    {
        printf("vaca\n");
    }

    if (0 == strcmp(esq, invertebrado) && 0 == strcmp(esp, inseto) && 0 == strcmp(ali, hematofago))
    {
        printf("pulga\n");
    }

    if (0 == strcmp(esq, invertebrado) && 0 == strcmp(esp, inseto) && 0 == strcmp(ali, herbivoro))
    {
        printf("lagarta\n");
    }

    if (0 == strcmp(esq, invertebrado) && 0 == strcmp(esp, anelideo) && 0 == strcmp(ali, hematofago))
    {
        printf("sanguessuga\n");
    }

    if (0 == strcmp(esq, invertebrado) && 0 == strcmp(esp, anelideo) && 0 == strcmp(ali, onivoro))
    {
        printf("minhoca\n");
    }

    return 0;
}
