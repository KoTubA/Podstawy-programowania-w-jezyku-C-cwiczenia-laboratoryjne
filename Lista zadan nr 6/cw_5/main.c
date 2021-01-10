#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5

void complete_array(double tablica[N][N]);
void show_array(double tab[N][N]);
void resetDiagonal(double rtab[N][N]);
double sumDiagonal(double stab[N][N]);
double sumRow(double srtab[N][N], int row);
double sumColumn(double sctab[N][N], int column);
void reverseRow(double rrtab[N][N], int reverse_row1, int reverse_row2);
void resetRowAndCloumn(double rractab[N][N]);
void transpositionArray(double ttab[N][N]);
void resetBelowMainDiagonal(double rbmdtab[N][N]);

int main()
{
    double table[N][N];
    complete_array(table);
    show_array(table);
    resetDiagonal(table);
    show_array(table);
    printf("Suma glownej przekatne wynosi: %f\n", sumDiagonal(table));
    printf("Suma wiersza 2 wynosi: %f\n", sumRow(table, 1));
    printf("Suma kolummy 3 wynosi: %f\n\n", sumColumn(table, 2));
    reverseRow(table, 2, 4);
    show_array(table);
    resetRowAndCloumn(table);
    show_array(table);
    transpositionArray(table);
    show_array(table);
    resetBelowMainDiagonal(table);
    show_array(table);

    return 0;
}

void complete_array(double tablica[N][N]) {
    srand(time(NULL));
    for(int i = 0; i<N; i++){
        for(int j = 0; j<N; j++){
            tablica[i][j] = rand()%100+1;
        }
    }
}

void show_array(double tab[N][N]) {
    for(int i = 0; i<N; i++) {
        for(int j = 0; j<N; j++){
            printf("%.2f ",tab[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void resetDiagonal(double rtab[N][N]) {
    for(int i = 0; i<N; i++){
        rtab[i][i] = 0;
    }
}

double sumDiagonal(double stab[N][N]) {
    double sum = 0;
    for(int i = 0; i<N; i++){
        sum += stab[i][i];
    }

    return sum;
}

double sumRow(double srtab[N][N], int row) {
    double rsum = 0;

    for(int i = 0; i<N; i++){
        rsum += srtab[row][i];
    }

    return rsum;
}

double sumColumn(double sctab[N][N], int column)  {
    double csum = 0;

    for(int i = 0; i<N; i++){
        csum += sctab[i][column];
    }

    return csum;
}

void reverseRow(double rrtab[N][N], int reverse_row1, int reverse_row2) {
    double arr[N];
    for(int i=0; i<N; i++) {
        arr[i] = rrtab[reverse_row1][i];
    }

    for(int j=0; j<N; j++) {
        rrtab[reverse_row1][j] = rrtab[reverse_row2][j];
        rrtab[reverse_row2][j] = arr[j];
    }
}

void resetRowAndCloumn(double rractab[N][N]) {
    int x = 0, y = 0;
    double max = rractab[0][0];

    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++) {
            if(rractab[i][j]>max) {
                x = i;
                y = j;
                max = rractab[i][j];
            }
        }
    }

    for(int a=0; a<N; a++) {
        for(int b=0; b<N; b++) {
            if(a==x || b==y) rractab[a][b] = 0;
        }
    }


}

void transpositionArray(double ttab[N][N]) {
    int ctab[N][N];

    for(int a=0; a<N; a++) {
        for(int b=0; b<N; b++) {
            ctab[a][b] = ttab[a][b];
        }
    };

    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++) {
            ttab[i][j] = ctab[j][i];
        }
    }

}

void resetBelowMainDiagonal(double rbmdtab[N][N]) {
    for(int i=1; i<N; i++) {
        for(int j=0; j<N; j++) {
            if(i>j) rbmdtab[i][j] = 0;
        }
    }
}

