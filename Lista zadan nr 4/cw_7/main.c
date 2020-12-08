#include <stdio.h>
#include <stdlib.h>

int getnumber(){
    int number;
    
    do {
        scanf("%d", &number);
        
    } while(number<1||number>10);
    
    return number;
}

int main()
{

    printf("Podaj liczbe z przedziału 1-10\n");
    printf("Podana liczba to: %d\n", getnumber());

    return 0;
}
