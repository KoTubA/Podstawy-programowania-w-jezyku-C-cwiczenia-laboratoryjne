#include <stdio.h>
#include <stdlib.h>

int main()
{
    char character = 4;
    int number = 1;
    float number2 = 3.14;
    double number3 = 1.732;

    printf("Char: %d\n", sizeof(character));
    printf("Int: %d\n", sizeof(number));
    printf("Float: %d\n", sizeof(number2));
    printf("Double: %d", sizeof(number3));

}
