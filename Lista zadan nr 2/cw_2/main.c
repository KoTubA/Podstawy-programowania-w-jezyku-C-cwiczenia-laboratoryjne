#include <stdio.h>
#include <stdlib.h>

int main()
{
    double x, y;

    printf("Podaj dwie liczby double odzielone spacja:\n");
    scanf("%f %f", &x, &y);
    if(x>y) {
        printf("Pierwsza liczba jest wieksza!");
    }
    else if (x<y) {
        printf("Druga liczba jest wieksza!");
    }
    else {
        printf("Obydwie liczby sa rowne!");
    }

    return 0;
}
