#include <stdio.h>

int main()
{
    int time, vel;
    double lit, dist;
    scanf("%d %d", &time, &vel);
    dist = time * vel;
    lit = dist / 12;
    printf("%.3lf\n", lit);

    return 0;
}
