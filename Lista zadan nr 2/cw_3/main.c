#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, x;

    printf("Podaj a:\n");
    scanf("%d",&a);
    printf("Podaj b:\n");
    scanf("%d",&b);

    if (a == 0) {
        if (b == 0){
            printf("Nieskonczenie wiele rozwizan");
        }
        else {
            printf("Rownanie sprzeczne");
        }
    }
    else
    {
        x = -b/a;
        printf("Miejsce zerowe: %f", x);
    }


    return 0;
}
