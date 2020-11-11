#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number, counter, f_number;

    printf("Podaj liczbe poczatkowom:\n");
    scanf("%d", &number);
    printf("Podaj liczbe koncowa:\n");
    scanf("%d", &f_number);
    printf("Podaj licznik:\n");
    scanf("%d", &counter);

    if(f_number>number) {
        while(f_number>=number) {
            printf("%d\n", number);
            number+=counter;
        }
    }
    else if(f_number<number) {
        while(f_number<=number) {
            printf("%d\n", number);
            number-=counter;
        }
    }

    return 0;
}
