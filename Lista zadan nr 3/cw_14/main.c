#include <stdio.h>
#include <stdlib.h>

int main()
{

    int wiersz;

    printf("podaj ilosc wierszy: \n");
    scanf("%d", &wiersz);

    //Przyklad a
    printf("Przyklad a: \n");
    for(int a = 1; a<=wiersz; a++) {
        for(int b=0; b<a; b++){
            printf("*");
        }
        printf("\n");
    }

    printf("\n");

    //Przyklad b
    printf("Przyklad b: \n");
    for(int x = wiersz; x>0; x--) {
        for(int y=x;y>0;y--){
            printf("*");
        }
        printf("\n");
    }

    printf("\n");

    //Przyklad c
    printf("Przyklad c: \n");
    for(int i = 0; i<wiersz; i++) {

        for(int j=1; j<wiersz-i; j++){
            printf(" ");
        }

        for(int o=0; o<2*i+1; o++){
            printf("*");
        }
        printf("\n");
    }

    printf("\n");

    return 0;
}
