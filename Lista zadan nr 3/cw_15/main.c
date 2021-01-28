#include <stdio.h>
#include <stdlib.h>

int main()
{

    int saldo = 0, operation, money;

    do {
        printf("\n0 - zeruj konto \n1 - wplac podana kwote \n2 - wyplac podana kwote \n3 - pokaz saldo \n4 - zakoncz obsluge konta \n");
        scanf("%d", &operation);
        switch(operation) {
            case 0: {
                if (saldo==0) printf("Konto jest puste! \n");
                else printf("Pomyslnie wyplacono %dzl \n", saldo);
                saldo = 0;
                break;
            }
            case 1: {
                printf("Podaj kwote jaka chesz wplacic: \n");
                scanf("%d", &money);
                saldo += money;
                printf("Pomyslnie wplacono %dzl \n", money);
                break;
            }
            case 2: {
                printf("Podaj kwote jaka chesz wyplacic: \n");
                scanf("%d", &money);
                if(money>saldo) {
                    printf("Podana kwota przekracza saldo konta! \n");
                }
                else {
                    printf("Pomyslnie wyplacono %dzl \n", money);
                    saldo -= money;
                }
                break;
            }
            case 3: {
                printf("Saldo konta: %dzl \n", saldo);
                break;
            }
            default:
                break;
        }
    } while(operation>=0&&operation<=3);

    return 0;
}
