#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age, day;
    printf("Podaj swoj wiek: \n");
    scanf("%d", &age);
    day = age * 365;
    printf("Twoj wiek w dniach to: %d", day);
}
