#include <stdio.h>
#include <stdlib.h>

#define N 2

struct Car {
    char marka[15];
    int year;
    double cena;
};

void loadSamochod(struct Car *vehicle);
void loadTab(struct Car *vehicle);
void printSamochod(struct Car vehicle);
void biggestPriceCar(struct Car *vehicle);
void latestCar(struct Car *vehicle);
double averagePriceCar(struct Car *vehicle);

int main()
{
    struct Car tab[N];
    loadTab(tab);
    printf("Srednia cena wszytki aut wynosi: %.2f", averagePriceCar(tab));

    return 0;
}

void loadSamochod(struct Car *vehicle) {
    printf("Podaj marke: \n");
    scanf("%s", vehicle->marka);
    printf("Podaj rok produkcji: \n");
    scanf("%d", &vehicle->year);
    printf("Podaj cene: \n");
    scanf("%lf", &vehicle->cena);
}


void loadTab(struct Car *vehicle) {
    for (int i =0; i<N; i++) {
        loadSamochod(&vehicle[i]);
    }
}

void printSamochod(struct Car vehicle) {
    printf("Marka: %s\n", vehicle.marka);
    printf("Rok produkcji: %d\n", vehicle.year);
    printf("Cena: %.2f\n", vehicle.cena);
}

void biggestPriceCar(struct Car *vehicle) {
    double biggestPrice = 0;
    int biggestPriceIndex = 0;
    for (int i=0; i<N; i++) {
        if(vehicle[i].cena>biggestPrice) {
                biggestPrice = vehicle[i].cena;
                biggestPriceIndex = i;
        }
    }
    printSamochod(vehicle[biggestPriceIndex]);
}

void latestCar(struct Car *vehicle) {
    int latest = 0;
    int latestIndex = 0;
    for (int i=0; i<N; i++) {
        if(vehicle[i].year>latest) {
                latest = vehicle[i].year;
                latestIndex = i;
        }
    }
    printSamochod(vehicle[latestIndex]);
}

double averagePriceCar(struct Car *vehicle) {
    double suma = 0;
    for (int i=0; i<N; i++) {
        suma += vehicle[i].cena;
    }

    return suma/N;
}

