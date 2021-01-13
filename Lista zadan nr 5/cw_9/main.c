#include <stdio.h>
#include <stdlib.h>

#define N 10

void multiply(int tab[], int number);

int main()
{
    int tablica[N] = {1,2,3,4,5,6,7,8,16,0};
    multiply(tablica, 3);

    for(int i=0; i<N; i++) {
        printf("%d,",tablica[i]);
    }

    return 0;
}

void multiply(int tab[], int number) {
    for(int j=0; j<N; j++) {
       tab[j] *= number;
    }
};

