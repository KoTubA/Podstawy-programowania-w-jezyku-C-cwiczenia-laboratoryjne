#include <stdio.h>
#include <stdlib.h>

#define N 8

void complete_array();
void print_array();

int main()
{
    double tablica[N];
    complete_array(tablica);
    print_array(tablica);

    return 0;
}

void complete_array(double *tab){
    printf("Podaj kolejne %d elemetow tablicy:\n",N);
    for(int i=0; i<N; i++) {
        scanf("%d,",&tab[i]);
    }
};

void print_array(double *tab) {
    for(int j=0; j<N; j++) {
        printf("%d",tab[j]);
    }
};
