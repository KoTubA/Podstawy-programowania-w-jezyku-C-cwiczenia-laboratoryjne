#include <stdio.h>
#include <stdlib.h>

int main()
{
    //a)
    int number1 = 1;
    int number2 = 2;
    int number3 = 3;
    int max;

    max = number1;
    if(number2>number2) max = number2;
    if(number3>number2) max = number3;
    printf("Najwieksza liczba to: %d", max);

    //b)
    int a = -1;
    int b = -2;

    if(a<0&&b<0) {
        printf("\nWynik to: %d", a+b);
    }
    else {
        printf("Liczby nie spelnia warunku!");
    }

    //c)
    int a2 = 10;
    int b2 = 5;

    if((a2>0&&b2>0)||(a2<0&&b2<0)) {
        printf("\nWynik to: %d", a2+b2);
    }
    else {
        printf("Liczby nie spelnia warunku!");
    }

    return 0;
}
