#include <stdio.h>
#include <stdlib.h>

#define N 10

void minmax(int *tab);

int main()
{
    int tablica[N] = {1,2,3,4,5,6,7,8,16,32};
    minmax(tablica);

    for(int i=0; i<N; i++) {
        printf("%d,",tablica[i]);
    }

    return 0;
}

void minmax(int *tab) {
    int min = tab[0], max = tab[0];
    int min_index = 0, max_index = 0;
    for(int j=0; j<N; j++) {
        if(tab[j]<min){
            min=tab[j];
            min_index = j;
        };
        if(tab[j]>max){
            max=tab[j];
            max_index = j;
        };
    }
    tab[min_index] = max;
    tab[max_index] = min;
};
