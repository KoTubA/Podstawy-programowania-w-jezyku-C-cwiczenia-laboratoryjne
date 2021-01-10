#include <stdio.h>
#include <stdlib.h>

#define N 3

void multiply(int *tab, int number);

int main()
{
    int tab[N] = {1,2,3};
    int *a = &tab[0], *b = &tab[1], *c = &tab[2];
    *a+=3;
    *b+=3;
    *c+=3;

    for(int i=0; i<N; i++) {
        printf("%d,",tab[i]);
    }

    return 0;
}
