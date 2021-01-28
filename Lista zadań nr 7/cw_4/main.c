#include <stdio.h>
#include <stdlib.h>

struct Fraction {
    int numerator;
    int denominator;
};

void completeFraction(struct Fraction *p);
void printFraction(struct Fraction item);

int main()
{
    struct Fraction ulamek1;

    completeFraction(&ulamek1);

    printFraction(ulamek1);

    return 0;
}

void completeFraction(struct Fraction *p) {
    printf("Podaj licznik:\n");
    scanf("%d",&p->numerator);
    printf("Podaj mianownik:\n");
    scanf("%d",&p->denominator);
}

void printFraction(struct Fraction item) {
    printf("\nLicznik: %d\n",item.numerator);
    printf("Mianownik: %d\n", item.denominator);
}
