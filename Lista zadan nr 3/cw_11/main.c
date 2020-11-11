#include <stdio.h>
#include <stdlib.h>

int main()
{

    float pensja, suma;
    int i = 0;

    do {

        printf("Podaj pensje miesieczna: \n");
        scanf("%f", &pensja);

        if(pensja*12>45000) {
            suma += pensja*12;
            i++;
        }
        else continue;

    }while(pensja>0);

    printf("Srednia pensja roczna %d pracownikow to: %.2f", i, suma/i);

    return 0;
}
