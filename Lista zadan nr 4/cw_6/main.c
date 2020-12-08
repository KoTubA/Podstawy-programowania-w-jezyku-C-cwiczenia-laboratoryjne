#include <stdio.h>
#include <stdlib.h>

int rysuj(char znak, int rows, int columns) {

    for(int i=0; i<rows; i++) {
        for(int j=0; j<columns; j++) {
            printf("%c",znak);
        }
        printf("\n");
    }

    return 0;
}

int main()
{
    char znak;
    int r, c;
    printf("Podaj format: + 1 2 (+-znak, 1-kolumny,2-wiersze):\n");
    scanf("%c %d %d", &znak, &r, &c);
    rysuj(znak, r, c);

    return 0;
}
