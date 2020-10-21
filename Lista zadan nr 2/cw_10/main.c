#include <stdio.h>
#include <stdlib.h>

int main()
{
    float number, number2;
    char sign;

    printf("Podaj dzialanie np. 3+2\n");
    scanf("%f%c%f",&number,&sign,&number2);

    if((int)sign==43) {
        printf("%.2f",number+number2);
    }
    else if((int)sign==45) {
        printf("%.2f",number-number2);
    }
    else if((int)sign==42) {
        printf("%.2f",number*number2);
    }
    else if((int)sign==47) {
        printf("%.2f",number/number2);
    }

    return 0;
}
