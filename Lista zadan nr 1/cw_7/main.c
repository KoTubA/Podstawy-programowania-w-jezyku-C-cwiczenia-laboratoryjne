#include <stdio.h>
#include <stdlib.h>

int main()
{

    float pensja, euro, dolar;
    printf("Podaj swoje wynagrodzenie miesieczne (zl): \n");
    scanf("%f", &pensja);
    euro = pensja / 4.48;
    dolar = pensja / 3.81;

    printf("Twoja pensja w przeliczeniu to: %.2f zlotych, %.2f euro oraz %.2f dolarow", pensja, euro, dolar);

    return 0;
}
