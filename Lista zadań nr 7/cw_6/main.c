#include <stdio.h>
#include <stdlib.h>

#define N 4

struct Student {
    char name[15];
    char surname[15];
    int year;
    char field[25];
    int grade[N];
};

void printStudent(struct Student *table, int number);
float averageGrade(struct Student *table);
void maxaverageGrade(struct Student *table);

int main()
{
    struct Student tab[N]={
        {"Jan", "Nowak", 2020, "informatyka",{3,5,4,5}},
        {"Maria", "Nowak", 2020, "informatyka",{2,5,4,5}},
        {"Adam", "Kowalski", 2021, "informatyka",{5,5,4,5}},
        {"Kacper", "Kowalski", 2020, "informatyka",{1,5,1,5}}
    };

    printStudent(tab, 2020);
    printf("Srednia ocen studentow: %f\n", averageGrade(tab));
    maxaverageGrade(tab);

    return 0;
}

void printStudent(struct Student *table, int number) {
    for(int i=0; i<N; i++) {
        if(table[i].year==number) {
            printf("%s %s %d %s Oceny: ",table[i].name,table[i].surname,table[i].year,table[i].field);
            for(int j=0; j<N; j++) {
                printf("%d ",table[i].grade[j]);
            }
            printf("\n");
        }
    }
}

float averageGrade(struct Student *table) {
    float sum = 0;
    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++) {
            sum += table[i].grade[j];
        }
    }

    return sum/(N*N);
}

void maxaverageGrade(struct Student *table) {
    int maxaverageIndex = 0;
    float maxaverage = 0;
    for(int i=0; i<N; i++) {
        float sum = 0;
        for(int j=0; j<N; j++) {
            sum += table[i].grade[j];
        }
        if(sum/N>maxaverage) {
            maxaverage = sum/N;
            maxaverageIndex = i;
        }
    }
    printf("%s %s Srednia: %f", table[maxaverageIndex].name,table[maxaverageIndex].surname,maxaverage);
}

