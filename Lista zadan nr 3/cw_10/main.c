#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i=1;
    char c;

    while(i<=5) {
        printf("Podaj mala litere: \n");
        scanf(" %c", &c);
        if(c<96 || c>122) continue;
        printf("Znak duzy %c \n", c-32);
        i++;
    }

    return 0;
}
