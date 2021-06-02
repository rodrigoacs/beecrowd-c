#include <stdio.h>

int main()
{
    int hora_inicio, hora_final, duracao;
    scanf("%d %d", &hora_inicio, &hora_final);
    if (hora_inicio >= hora_final)
    {
        duracao = (24 - hora_inicio) + hora_final;
    }
    else
    {
        duracao = hora_final - hora_inicio;
    }

    printf("O JOGO DUROU %d HORA(S)\n", duracao);
    return 0;
}
