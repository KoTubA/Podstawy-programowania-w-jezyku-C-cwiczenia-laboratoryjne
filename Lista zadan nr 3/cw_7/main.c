#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a, b;

    printf("Podaj dwie liczby odzielona spacja: \n");
    scanf("%d %d", &a, &b);

    while(a!=b) {
        if(a>b) {
            a-=b;
        }
       else {
            b-=a;
       }
    }

    printf("NWD: %d", a);

    return 0;
}
