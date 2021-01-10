#include <stdio.h>
#include <stdlib.h>

#define N 10

void count(int *tab);

int main()
{
    int tablica[N] = {1,-2,3,-4,5,-6,7,-8,16,0};
    count(tablica);

    return 0;
}

void count(int *tab) {
    int zero = 0, positive = 0, negative = 0;
    for(int j=0; j<N; j++) {
        if(tab[j]>0) positive++;
        else if(tab[j]<0) negative++;
        else zero++;
    }

    printf("Ilosc liczb dodatnich: %d, ujemnych: %d, rowne zeru: %d", positive, negative, zero);
};
