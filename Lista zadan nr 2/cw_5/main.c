#include <stdio.h>
#include <stdlib.h>

int main()
{
    float number;
    printf("Podaj sile wiatru w wezlach:\n");
    scanf("%f",&number);

    if(number<1) {
        printf("Opis slowny: Cisza");
    }
    else if(number>=1 && number<=3) {
        printf("Opis slowny: Zefir");
    }
    else if(number>=4 && number<=27) {
        printf("Opis slowny: Bryza");
    }
    else if(number>=28 && number<=47) {
        printf("Opis slowny: Wichura");
    }
    else if(number>=48 && number<=63) {
        printf("Opis slowny: Sztorm");
    }
    else {
        printf("Opis slowny: Huragan");
    }

    return 0;
}
