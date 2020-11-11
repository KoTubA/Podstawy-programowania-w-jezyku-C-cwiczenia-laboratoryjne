#include <stdio.h>
#include <stdlib.h>

int main()
{

    int operation, saldo, money;

    do {
        printf("0 - zeruj konto 1 - wp³ac podana kwote \n 2 - wyp³ac podana kwote \n 3 - pokaz saldo \n 4 - zakoñcz obs³uge konta \n");
        scanf("%d", &operation);
        switch(operation) {
            case:0 {
                printf("Pomyslnie wyplacono %dzl", saldo);
                saldo = 0;
                break;
            }
            case: 1 {
                printf("Podaj kwote jaka chesz wplacic: \n");
                scanf("%d", &money);
                printf("Pomyslnie wplacono %dzl", money);
                break;
            }
            case: 2 {
                printf("Podaj kwote jaka chesz wyplacic: \n");
                scanf("%d", &money);
                if(money>saldo) printf("Podana kwota przekracza saldo konta!")
                else  printf("Pomyslnie wyplacono %dzl", money);
                break;
            }
            case: 3 {
                printf("Saldo konta: %dzl", saldo);
                break;
            }
            default break;
        }
    } while(operation>=0&&operation<=3)

    return 0;
}
