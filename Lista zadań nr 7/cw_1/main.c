#include <stdio.h>
#include <stdlib.h>

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
    struct Products product1 = {1, "banan", 1.15, 2.99};
    struct Products product2;
    struct Products product3;

    printf("Podaj id produkut:\n");
    scanf("%d",&product2.id);
    printf("Podaj nazwe produktu:\n");
    scanf("%s",product2.name);
    printf("Podaj wage produkut:\n");
    scanf("%lf",&product2.weight);
    printf("Podaj cene produkut:\n");
    scanf("%lf",&product2.price);
    completeProduct(&product3);

    printProduct(product1);
    printProduct(product2);
    printProduct(product3);

    return 0;
}

void completeProduct(struct Products *p) {
    printf("\nPodaj id produkut:\n");
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
