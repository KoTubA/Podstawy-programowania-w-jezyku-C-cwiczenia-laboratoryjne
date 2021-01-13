#include <stdio.h>
#include <stdlib.h>

#define N 10

int maxNeighbors(int x[]);

int main()
{
    int table[N] = {1,2,3,4,5,6,7,8,16,0};
    printf("Index pierwszego z elementow najwiekszej sumy sasiadow tablicy to: %d\n", maxNeighbors(table));

    return 0;
}

int maxNeighbors(int x[]) {
    int max_neighbors = x[0]+x[1], index = 0;

    for(int j=1; j<N-2; j++) {
        if(x[j]+x[j+1]>max_neighbors){
            max_neighbors=x[j]+x[j+1];
            index = j;
        };
    }

    return index;
};

