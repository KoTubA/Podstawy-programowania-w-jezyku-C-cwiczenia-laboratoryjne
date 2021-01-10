#include <stdio.h>
#include <stdlib.h>

#define N 10

void podzielnosc(int *tab);

int main()
{
    int tablica[N] = {0,2,3,4,5,6,7,8,16,32};
    podzielnosc(tablica);
    return 0;
}

void podzielnosc(int *tab) {
    int counter = 0, k = 4;
    for(int j=0; j<N; j++) {
        if(tab[j]%4==0&&tab[j]!=0) counter++;
    }
    printf("W tablicy sa %d liczby podzielne przez %d", counter, k);
};
