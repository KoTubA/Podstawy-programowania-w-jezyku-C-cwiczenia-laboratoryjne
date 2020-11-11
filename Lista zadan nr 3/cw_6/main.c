#include <stdio.h>
#include <stdlib.h>

int main()
{

    int number, number2;

    do {
        printf("Podaj numer:\n");
        scanf("%d", &number2);
        if(number2>number) number = number2;
    }while(number2>0);

    printf("Najwieksza podana liczba to: %d", number);

    return 0;
}
