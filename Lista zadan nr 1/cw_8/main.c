#include <stdio.h>
#include <stdlib.h>

#define PI 3.14159

int main()
{
    float r;
    float pole, obj;

    scanf("%f", &r);

    pole = 4 * PI * r * r;
    obj = (4.00 / 3.00) * PI * r * r * r;
    printf("Pole kuli %f \n", pole);
    printf("Objetosc kuli %f", obj);

    return 0;
}
