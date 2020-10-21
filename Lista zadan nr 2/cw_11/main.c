#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number, first;

    printf("Podaj ocene w skali od 0-100\n");
    scanf("%d", &number);

    first = number;
    while(first>=10) {
        first /= 10;
    }

    switch(first) {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            printf("Ocena: E");
            break;
        case 6:
            printf("Ocena: D");
            break;
        case 7:
            printf("Ocena: C");
            break;
        case 8:
            printf("Ocena: B");
            break;
        case 9:
            printf("Ocena: A");
            break;
        default:
            printf("Podales zla ocene!");
    }

    return 0;
}
