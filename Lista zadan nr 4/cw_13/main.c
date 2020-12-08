#include <stdio.h>
#include <stdlib.h>

void replace(int number, int *w);

int main()
{
    int number = 1, number2 = 2;
    replace(number, &number2);
    printf("n: %d, m: %d \n", number, number2);
    return 0;
}

void replace(int n, int *w) {
    *w = n;
}
