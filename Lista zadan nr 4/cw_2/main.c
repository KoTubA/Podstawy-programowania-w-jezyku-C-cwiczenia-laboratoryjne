#include <stdio.h>
#include <stdlib.h>

double max(double number1, double number2) {
    return (number1>number2) ? number1 : number2;
}

int main()
{

    double n, m;

    printf("Podaj licze 1:\n");
    scanf("%lf",&n);
    printf("Podaj licze 2:\n");
    scanf("%lf",&m);

    printf("Maksymalna liczba to: %lf", max(n,m));

    return 0;
}
