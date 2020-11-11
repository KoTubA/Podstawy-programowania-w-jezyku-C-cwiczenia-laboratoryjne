#include <stdio.h>
#include <stdlib.h>

int main()
{

    float wplataA = 1000, wplataF = 1000, stanA, stanF;
    int rok = 0;

    stanF = wplataF;

    do {

        stanA += wplataA*1.1;
        stanF *= 1.06;
        rok++;

    } while(stanA>stanF);

    printf("Stan konta Agaty: %.2f \n", stanA);
    printf("Stan konta Franka: %.2f \n", stanF);
    printf("Ilosc lat od inwestycji: %d \n", rok);

    return 0;
}
