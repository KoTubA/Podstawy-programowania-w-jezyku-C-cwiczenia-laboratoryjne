#include <stdio.h>
#include <stdlib.h>

int silnia(int number){
    int silnia = 1, licznik_f = 1;
    
    while (licznik_f<=number) {
        silnia*=licznik_f;
        licznik_f++;
    }
    return silnia;
}

int main()
{

    printf("Wartość wyrażenia: 4! + 6! − 2 wynosi: %d\n",silnia(4)+silnia(6)-2);
    printf("Wartość symbolu Newtona: (5 2) wynosi: %d\n",silnia(5)/(silnia(2)*silnia(5-2)));

    return 0;
}
