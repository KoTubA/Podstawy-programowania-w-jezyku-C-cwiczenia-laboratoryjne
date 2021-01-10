#include <stdio.h>
#include <stdlib.h>

#define N 8

int main()
{

    int tab[N];
    printf("Podaj kolejne 8 elemetow tablicy:\n");
    for(int i=0; i<N; i++) {
        scanf("%d,",&tab[i]);
    }

    for(int j=N-1; j>=0; j--) {
        printf("%d",tab[j]);
    }

    return 0;
}
