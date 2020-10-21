#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    float distance, time;
    printf("Wybierz osrodek, za pomoca cyfr 1-3\n1-powietrze 2-woda 3-stal\n");
    scanf("%d", &number);
    printf("Podaj odleglosc:\n");
    scanf("%f", &distance);

    switch(number) {
        case 1:
            printf("Czas potrzebny na przebyciu tej drogi to: %f", time = distance / 343);
            break;
        case 2:
            printf("Czas potrzebny na przebyciu tej drogi to: %f", time = distance / 1490);
            break;
        case 3:
            printf("Czas potrzebny na przebyciu tej drogi to: %f", time = distance / 5100);
            break;
        default:
            printf("Nie podales wartosci z przedzialu 1-3!");
    }
    return 0;
}
