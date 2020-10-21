#include <stdio.h>
#include <stdlib.h>

int main()
{
    char string;

    printf("Podaj znak:\n");
    scanf("%c", &string);

    if((int)string>64 && (int)string<123) {
        printf("litera (a do z lub od A do Z)");
    }
    else if((int)string>47 && (int)string<58) {
        printf("cyfra (od 0 do 9)");
    }
    else {
        printf("znak specjalny (wszystkie inne)");
    }

    return 0;
}
