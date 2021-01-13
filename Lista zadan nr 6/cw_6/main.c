#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 3
#define M 5

void complete_array(int ctable[][M]);
void complete_array2(int table[][M], int ctable2[][M], int k);
void complete_array3(int table_1[][M], int table_2[][M], int ctable3[][M]);
void complete_array4(int table_3[][M], int ctable4[][N]);
void show_array(int stable[N][M]);

int main()
{
    int tab1[N][M], tab2[N][M], tab3[N][M], tab4[M][N];
    complete_array(tab1);
    show_array(tab1);
    complete_array2(tab1, tab2, 2);
    show_array(tab2);
    complete_array3(tab1, tab2, tab3);
    show_array(tab3);
    complete_array4(tab3, tab4);

    return 0;
}

void complete_array(int ctable[N][M]) {
    srand(time(NULL));
    for(int i = 0; i<N; i++){
        for(int j = 0; j<M; j++){
            ctable[i][j] = rand()%201-100;
        }
    }
}

void show_array(int stable[][M]) {
    for(int i = 0; i<N; i++) {
        for(int j = 0; j<M; j++){
            printf("%d ",stable[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void complete_array2(int table[][M], int ctable2[][M], int k) {
    for(int i = 0; i<N; i++) {
        for(int j = 0; j<M; j++){
            ctable2[i][j] = 2 * table[i][j];
        }
    }
}

void complete_array3(int table_1[][M], int table_2[][M], int ctable3[][M]) {
    for(int i = 0; i<N; i++) {
        for(int j = 0; j<M; j++){
            ctable3[i][j] = table_1[i][j] + table_2[i][j];
        }
    }
}

void complete_array4(int table_3[][M], int ctable4[][N]) {
    for(int i=0; i<M; i++) {
        for(int j=0; j<N; j++) {
            ctable4[i][j] = table_3[j][i];
            printf("%d ",ctable4[i][j]);
        }
        printf("\n");
    }
}
