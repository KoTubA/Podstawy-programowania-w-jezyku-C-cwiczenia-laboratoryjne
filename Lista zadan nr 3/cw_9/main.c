#include <stdio.h>
#include <stdlib.h>

int main()
{

    float number, suma;
    int n, i=1;

    printf("Podaj liczbe studentow: \n");
    scanf("%d", &n);


    while(i<=n) {
        printf("Podaj %d ocene: \n", i);
        scanf("%f", &number);
        if(number<=0) break;
        suma += number;
        i++;
    }

    printf("Srednia ocen to: %.2f", suma/(i-1));

    return 0;
}
