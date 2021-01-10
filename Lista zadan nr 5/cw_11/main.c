#include <stdio.h>
#include <stdlib.h>

#define N 100

void bubblesort(int *table);
void randomNumber(int *tablica);;

int main()
{
    int tablica[N];
    randomNumber(tablica);
    bubblesort(tablica);

    for(int i=0; i<N; i++) {
        printf("%d ",tablica[i]);
    }

    return 0;
}

void bubblesort(int *table)
{
	int i, j, temp;
	for (i = 0; i<N-1; i++)
    {
		for (j=0; j<N-1-i; j++)
		{
			if (table[j] > table[j+1])
			{
				temp = table[j+1];
				table[j+1] = table[j];
				table[j] = temp;
			}
		}
    }
}

void randomNumber(int *tablica) {
    srand(time(NULL));
    for(int i = 0; i<N; i++){
        tablica[i] = rand()%201-100;
    }
}

