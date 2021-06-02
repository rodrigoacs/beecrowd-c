#include <stdio.h>

int main()
{
    int A, B, C, MaiorAB, MaiorXC;
    scanf("%d %d %d", &A, &B, &C);
    MaiorAB = (A + B + abs(A - B)) / 2;
    MaiorXC = (MaiorAB + C + abs(MaiorAB - C)) / 2;
    printf("%d eh o maior\n", MaiorXC);

    return 0;
}
