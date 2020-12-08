#include <stdio.h>
#include <stdlib.h>

double sharmoniczna(double number1, double number2) {
    return -(((-number1)+(-number2))/2);
}

int main()
{

    double n, m;

    printf("Podaj licze 1:\n");
    scanf("%lf",&n);
    printf("Podaj licze 2:\n");
    scanf("%lf",&m);

    printf("Wynik: %lf", sharmoniczna(n,m));

    return 0;
}
