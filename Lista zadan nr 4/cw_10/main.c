#include <stdio.h>
#include <stdlib.h>

float suma(float *number, float *number2) {
    return *number + *number2;
}

int main()
{

    float a = 1, b = 2;
    printf("Suma to: %f", suma(&a, &b));

    return 0;
}
