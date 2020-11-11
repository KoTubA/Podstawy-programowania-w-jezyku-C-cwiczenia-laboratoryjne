#include <stdio.h>
#include <stdlib.h>

int main()
{

    int number;

    printf("Podaj licze calkowita:\n");
    scanf("%d",&number);

    int i = 0;
    while(i<10) {
        printf("%d\n",++number);
        i++;
    }

    return 0;
}
