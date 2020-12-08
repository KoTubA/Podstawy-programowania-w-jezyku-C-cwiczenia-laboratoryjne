#include <stdio.h>
#include <stdlib.h>

int counter(unsigned int number){
    int reszta;
    int x = 0;
    
    while (number != 0)
    {
        reszta = number % 2;
        number /= 2;
        x += reszta;
    }
    
    return x;
}

int main()
{
    unsigned int n;
    n = 10;
    printf("Liczba jedynek w liczbie %d: %d\n",n, counter(n));

    return 0;
}
