#include <stdio.h>

int main()
{
    int hrInicial, minInicial, hrFinal, minFinal, durHoras, durMinutos;

    scanf("%d %d %d %d", &hrInicial, &minInicial, &hrFinal, &minFinal);

    hrInicial *= 60;
    hrFinal *= 60;
    minInicial += hrInicial;
    minFinal += hrFinal;

    if (minFinal <= minInicial)
    {
        minFinal += 1440;
    }

    durHoras = (minFinal - minInicial) / 60;
    durMinutos = (minFinal - minInicial) % 60;

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", durHoras, durMinutos);
    return 0;
}
