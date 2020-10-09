#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dane, godzina, minuta, sekundy;
    printf("Podaj czas (s): \n");
    scanf("%d", &dane);

    godzina = dane / 3600;
    printf("Godzin: %d \n", godzina);

    minuta = (dane % 3600) / 60;
    printf("Minut: %d \n", minuta);

    sekundy = (dane % 3600) % 60;
    printf("Sekund: %d", sekundy);
}
