#include <stdio.h>
#include <stdlib.h>

void reverseTab(int tab[][5], int m, int n);

int main()
{
    int tablica[3][5] = {
        {1,2,3,4,5},
        {5,4,3,2,1},
        {3,6,9,12,15}
    };

    reverseTab(tablica, 3, 5);

    for(int i=0; i<3; i++) {
        for(int j=0; j<5; j++) {
            printf("%d ", tablica[i][j]);
        }
        printf("\n");
    };

    return 0;
}

void reverseTab(int tab[][5], int m, int n) {
    int ctab[m][n];

    for(int a=0; a<m; a++) {
        for(int b=0; b<n; b++) {
            ctab[a][b] = tab[a][b];
        }
    };

    for(int i=0; i<m; i++) {
        for(int j=1; j<=n; j++) {
            tab[i][j-1] = ctab[i][n-j];
        }
    };
};

