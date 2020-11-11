#include <stdio.h>
#include <stdlib.h>

int main()
{

    unsigned long long int number;
    int i = 0;

    printf("Podaj liczbe naturalna:\n");
    scanf("%d", &number);
    do {
        number /= 10;
        i++;
    } while(number>0);

    printf("Liczba jest %d cyfrowa", i);

    return 0;
}
