#include <stdio.h>
#include <stdlib.h>

int main()
{

    char c = "a";
    int number = 1;
    float number2 = 2.0;
    double number3 = 3.00;
    
    printf("Liczba: %c, adres w pamieci: %p\n",c,&c);
    printf("Liczba: %d, adres w pamieci: %p\n",number,&number);
    printf("Liczba: %f, adres w pamieci: %p\n",number2,&number2);
    printf("Liczba: %f, adres w pamieci: %p\n",number3,&number3);

    return 0;
}
