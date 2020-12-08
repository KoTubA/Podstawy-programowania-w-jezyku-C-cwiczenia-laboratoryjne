#include <stdio.h>
#include <stdlib.h>

void getNumber(int n1, int n2);

int main()
{
    int a = 10;
    int b = 20;
    getNumber(a,b);
    return 0;
}

void getNumber(int n1, int n2) {
    int number;

    do {
        printf("Podaj liczbe z zakresu %d-%d:\n", n1, n2);
        scanf("%d",&number);
    }while(number<n1||number>n2);

    printf("Pobrano liczbe");
}
