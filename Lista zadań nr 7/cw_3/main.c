#include <stdio.h>
#include <stdlib.h>

#define N 4

struct Products {
    int id;
    char name[15];
    double weight;
    double price;
};

void completeProduct(struct Products *p);
void printProduct(struct Products item);

int main()
{
    struct Products tab[N];

    for (int i=0; i<N; i++) {
        completeProduct(&tab[i]);
    }

    for (int j=0; j<N; j++) {
        printProduct(tab[j]);
    }

    return 0;
}

void completeProduct(struct Products *p) {
    printf("Podaj id produkut:\n");
    scanf("%d",&p->id);
    printf("Podaj nazwe produktu:\n");
    scanf("%s",p->name);
    printf("Podaj wage produkut:\n");
    scanf("%lf",&p->weight);
    printf("Podaj cene produkut:\n");
    scanf("%lf",&p->price);
}

void printProduct(struct Products item) {
    printf("\nId produkut: %d\n",item.id);
    printf("Nazwa produktu: %s\n", item.name);
    printf("Waga produkutu: %.2f\n", item.weight);
    printf("Cene produkut: %.2f\n", item.price);
}
