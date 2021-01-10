#include <stdio.h>
#include <stdlib.h>

#define N 10

int main()
{

    int tab[N] = {1,3,5,7,9,11,13,15,17,19};
    for(int i=0; i<N; i++) {
        printf("%d,",tab[i]);
    }

    return 0;
}
