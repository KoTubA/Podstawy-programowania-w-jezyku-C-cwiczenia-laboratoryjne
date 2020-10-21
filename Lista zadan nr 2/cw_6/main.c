#include <stdio.h>
#include <stdlib.h>

int main()
{

    int number;
    printf("Podaj liczbe:\n");
    scanf("%d",&number);

    number>=0 ? printf("Liczba bezwgledna %d", number) : printf("Liczba bezwgledna %d", abs(number));

    return 0;
}
