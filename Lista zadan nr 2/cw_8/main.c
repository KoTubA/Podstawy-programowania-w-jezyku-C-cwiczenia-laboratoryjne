#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year;
    printf("Podaj rok:\n");
    scanf("%d",&year);

    if((year%4==0 && year%100!=0) || year%400==0) {
        printf("Podany rok jest przestepny");
    }
    else {
        printf("Podany rok nie jest przestepny");
    }

    return 0;
}
