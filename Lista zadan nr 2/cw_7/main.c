#include <stdio.h>
#include <stdlib.h>

int main()
{
    //a)
    int number1 = 1;
    int number2 = 2;
    int number3 = 3;

    (number1>number2 && number1>number3) ? printf("Najwieksza liczba to: %d", number1) : (number2>number1 && number2>number3) ? printf("Najwieksza liczba to: %d", number2) : printf("Najwieksza liczba to: %d", number3);

    //b)
    int a = -1;
    int b = -2;

    (a<0&&b<0) ? printf("\nWynik to: %d", a+b) : printf("");

    //c)
    int a2 = 10;
    int b2 = 5;

    (a2>0&&b2>0)||(a2<0&&b2<0) ? printf("\nWynik to: %d", a2+b2) : printf("");

    return 0;
}
