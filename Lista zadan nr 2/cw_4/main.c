#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a, b, c, delta;

    printf("Podaj a:\n");
    scanf("%f",&a);
    printf("Podaj b:\n");
    scanf("%f",&b);
    printf("Podaj c:\n");
    scanf("%f",&c);

    if (a == 0) {
        printf("a nie moze byc rowne 0!");
    }
    else {
        delta = (b*b)-(4*a*c);
        printf("Delta: %f\n", delta);

        if (delta > 0) {
            printf("Pierwsze rozwiazanie x: %f\n",(-b-sqrt(delta))/(2*a));
            printf("Drugie rozwiazanie x: %f",(-b+sqrt(delta))/(2*a));
        }
        else if (delta == 0) {
            printf("Jedno rozwiazanie x: %f",-b/(2*a));
        }
        else {
            if (delta < 0) {
                printf("Brak rozwiazan");
            }
        }
    }

    return 0;
}
