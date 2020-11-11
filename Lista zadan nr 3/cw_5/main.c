#include <stdio.h>
#include <stdlib.h>

int main()
{

    //a)
    int n, licznik_a = 1;
    printf("Podaj numer:\n");
    scanf("%d", &n);

    printf("\na)\n");
    while(n>=licznik_a) {
        printf("%d ", licznik_a);
        licznik_a++;
    }

    printf("\n \n");

    //Kopie do ponizszych przykladow:
    int b = n, c = n, d = n, e = n, g = n, i = n, j = n, k = n;

    //b)
    printf("b)\n");
    while(b>=1) {
        printf("%d ", b);
        b--;
    }

    printf("\n \n");

    //c
    printf("c)\n");
    while(c>=1) {
        c--;
        if(c%2==0 && c!=0) {
            printf("%d ", c);
        }
    }

    printf("\n \n");

    //d
    printf("d)\n");
    while(d>=1) {
        if(d%2) {
            printf("%d ", d);
        }
        d--;
    }

    printf("\n \n");

    //e
    int licznik_e = 1, number = 1;
    printf("e)\n");
    while(e>=licznik_e) {
        printf("%d ", number);
        number+=3;
        licznik_e++;
    }

    printf("\n \n");

    //f
    int silnia = 1, licznik_f = 1;
    printf("f)\n");
    while (licznik_f<=12) {
        silnia*=licznik_f;
        printf("%d ", silnia);
        licznik_f++;
    }

    printf("\n \n");

    //g
    int licznik_g = 1;
    printf("g)\n");
    while(g>=licznik_g) {
        printf("1/%d ", licznik_g);
        licznik_g++;
    }

    printf("\n \n");

    //h
    int a1=3, am = a1, licznik_h = 1;
    printf("h)\n");
    printf("%d ",am);
    while(licznik_h<17)
    {
        am = 3*am - 4*(3*am-4);
        printf("%d ",am);
        licznik_h++;
    }

    printf("\n \n");

    //i
    int b1=0, bm = b1, licznik_i = 1;
    printf("i)\n");
    printf("%d ",bm);
    while(licznik_i<32)
    {
        bm = 2*bm + 1;
        printf("%d ",bm);
        licznik_i++;
    }

    printf("\n \n");

    //j
    printf("j)\n");
    int licznik_j = 1, suma_j = 0;

    while(licznik_j<=j)
    {
        suma_j+=licznik_j;
        licznik_j++;
    }

    printf("%d ", suma_j);
    printf("\n \n");

    //k
    printf("k)\n");
    int licznik_k = 1, suma_k = 0;

    while(licznik_k<=k)
    {
        suma_k = suma_k + (licznik_k*licznik_k);
        licznik_k++;
    }

    printf("%d ", suma_k);
    printf("\n \n");

    //l
    printf("l)\n");
    int licznik_l = 1, nieparzyste_l = 0, parzyste_l = 0;

    while(n>=licznik_l) {
        if(licznik_l%2 == 0) parzyste_l++;
        else nieparzyste_l++;

        licznik_l++;
    }

    printf("Ilosc liczb nieparzystych: %d \n", nieparzyste_l);
    printf("Ilosc liczb parzystych: %d ", parzyste_l);

    printf("\n \n");

    //m
    printf("m)\n");
    int licznik_m = 1, ujemne_m = 0, nieujemne_m = 0;

    while(n>=licznik_m) {
        if(licznik_m >= 0) nieujemne_m++;
        else ujemne_m++;

        licznik_m++;
    }

    printf("Ilosc liczb ujemneych: %d \n", ujemne_m);
    printf("Ilosc liczb nieujemnych: %d ", nieujemne_m);

    printf("\n \n");


    return 0;
}
