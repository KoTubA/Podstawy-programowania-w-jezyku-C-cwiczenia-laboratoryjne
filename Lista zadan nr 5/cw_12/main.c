#include <stdio.h>
#include <stdlib.h>

#define N 3

void sumVectors(int sv_table[], int sv_table2[]);
void dotProduct(int dp_table[], int dp_table2[]);

int main()
{
    int tab1[N] = {1,2,3};
    int tab2[N] = {3,2,1};

    sumVectors(tab1, tab2);
    dotProduct(tab1, tab2);

    return 0;
}

void sumVectors(int sv_table[], int sv_table2[]) {
    int sum_table[N];

    printf("Suma 1 i 2 wektora wynosi: [");
    for(int j=0; j<N; j++) {
        sum_table[j] = sv_table[j] + sv_table2[j];
        if(j==N-1) printf("%d]\n", sum_table[j]);
        else printf("%d, ", sum_table[j]);
    }
}

void dotProduct(int dp_table[], int dp_table2[]) {
    int result = 0;

    for(int i=0; i<N; i++) {
        result += dp_table[i] * dp_table2[i];
    }

    printf("Iloczyn skalarny 1 i 2 wektora wynosi: %d\n", result);
}

