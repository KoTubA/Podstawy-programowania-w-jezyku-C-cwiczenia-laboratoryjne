#include <stdio.h>
#include <stdlib.h>

double power(int wykladnik, double number) {
    double wynik = 1;
    for(int i=0; i<wykladnik; i++) wynik*=number;
    return wynik;
}

int main()
{

    printf("Wynik to: %lf", power(2,3.1+(3,5.5)+24));

    return 0;
}
