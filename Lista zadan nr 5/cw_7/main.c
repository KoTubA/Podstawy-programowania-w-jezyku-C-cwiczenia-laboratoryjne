#include <stdio.h>
#include <stdlib.h>

#define N 10

void move(int *tab);

int main()
{
    int tablica[N] = {1,-2,3,-4,5,-6,7,-8,16,0};
    move(tablica);

    for(int i=0; i<N; i++) {
        printf("%d,",tablica[i]);
    }

    return 0;
}

void move(int *tab) {
    int first = tab[0];
    for(int j=1; j<N; j++) {
        tab[j-1] = tab[j];
    }
    tab[N-1] = first;
};

