#include <stdio.h>
#include <stdlib.h>

#define N 10

void reverseTab(int *tab, int *ctab);

int main()
{
    int tablica[N] = {1,-2,3,-4,5,-6,7,-8,16,0};
    int ctablica[N];

    for(int i=0; i<N; i++) {
        ctablica[i] = tablica[i];
    }

    reverseTab(tablica, ctablica);

    for(int i=0; i<N; i++) {
        printf("%d,",tablica[i]);
    }

    return 0;
}

void reverseTab(int *tab, int *ctab) {

    for(int j=1; j<=N; j++) {
        tab[j-1] = ctab[N-j];
    }
};

