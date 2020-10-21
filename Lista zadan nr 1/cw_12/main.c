#include <stdio.h>
#include <stdlib.h>

int main()
{
    int licznik1, licznik2, mianownik1, mianownik2, wynik_licznik, wynik_mianownik;
    printf("Podaj pierwszy ulamek w formacie licznik/mianownik: \n");
    scanf("%d/%d", &licznik1, &mianownik1);

    printf("Podaj drugi ulamek w formacie licznik/mianownik: \n");
    scanf("%d/%d", &licznik2, &mianownik2);

    wynik_licznik = (licznik1 * mianownik2) + (licznik2 * mianownik1);
    wynik_mianownik = mianownik1 * mianownik2;

    printf("Oto wynik: %d / %d + %d / %d = %d / %d", licznik1, mianownik1, licznik2, mianownik2, wynik_licznik, wynik_mianownik);
}
