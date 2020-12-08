#include <stdio.h>
#include <stdlib.h>

int min(int *number, int *number2) {
    if(*number<*number2) return *number;
    else return *number2;
}

int main()
{

    int a = 1, b = 2;
    printf("Najmniejsza liczba to: %d", min(&a, &b));

    return 0;
}
