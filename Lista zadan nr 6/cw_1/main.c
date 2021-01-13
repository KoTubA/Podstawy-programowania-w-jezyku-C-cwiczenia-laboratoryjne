#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void complete_array(int tablica[][15]);
void show_array(int t[][15]);

int main()
{
    int table[10][15];
    complete_array(table);
    show_array(table);

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
