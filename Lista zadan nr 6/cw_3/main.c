#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void complete_array(int tablica[][15]);
void show_array(int t[][15]);
void new_array(int tab[][15], int tab2[][15]);
int find_max(int data[][15]);

int main()
{
    int table[10][15];
    int table2[10][15];
    complete_array(table);
    new_array(table, table2);
    show_array(table);
    show_array(table2);

    printf("Maksymala wartosc tabeli 1 to: %d, a tabeli 2: %d.", find_max(table), find_max(table2));

    return 0;
}

void complete_array(int tablica[][15]) {
    srand(time(NULL));
    for(int i = 0; i<10; i++){
        for(int j = 0; j<15; j++){
            tablica[i][j] = rand()%1001-500;
        }
    }
}

void show_array(int t[][15]) {
    for(int i = 0; i<10; i++) {
        for(int j = 0; j<15; j++){
            printf("%d, ",t[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void new_array(int tab[][15], int tab2[][15]) {
    for(int i = 0; i<10; i++){
        for(int j = 0; j<15; j++){
            tab2[i][j] = tab[i][j] * tab[i][j];
        }
    }
}

int find_max(int data[][15]) {
    int max = data[0][0];
    for(int i = 0; i<10; i++){
        for(int j = 0; j<15; j++){
            if(data[i][j]>max) max = data[i][j];
        }
    }

    return max;
}
