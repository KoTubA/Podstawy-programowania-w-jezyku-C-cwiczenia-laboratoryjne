#include <stdio.h>
#include <stdlib.h>

void bigger_number(double  *number, double  *number2) {
    if(*number>*number2) *number2 = *number;
    else *number = *number2;
}

int main()
{

    double a = 3, b = 10;
    bigger_number(&a, &b);
    printf("a: %lf, b: %lf", a, b);

    return 0;
}
