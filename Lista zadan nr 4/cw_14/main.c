#include <stdio.h>
#include <stdlib.h>

void decomposition(double n);

int main()
{
    double number = 16.1234;
    decomposition(number);
    return 0;
}

void decomposition(double n) {
    printf("Dekompozycja liczby...\n");
    int p1 = n;
    double p2 = n-p1;
    printf("Czesc calkowita z liczby %f to %d, a czesc ulamkowa %f", n, p1, p2);
}
