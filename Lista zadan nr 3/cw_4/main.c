#include <stdio.h>
#include <stdlib.h>

int main()
{
    int reszta;
    int x = 0;
    unsigned long long int number;

    printf("Podaj liczbe:\n");
    scanf("%d",&number);
    while (number != 0)
    {
        reszta = number % 2;
        number /= 2;
        x += reszta;
    }
    printf("%d\n", x);
    return 0;
}
