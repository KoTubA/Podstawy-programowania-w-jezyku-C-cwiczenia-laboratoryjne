#include <stdio.h>
#include <stdlib.h>

#define N 4

struct Pointer {
    float x;
    float y;
};

int osx (struct Pointer *p);
void symmetryOX (struct Pointer *p2);
void symmetry00 (struct Pointer *p3);
int completePointer(struct Pointer *p4);
void completePointerExtended(struct Pointer *p5, int *tab);

int main()
{
    int table[7] = {0};

    struct Pointer tab[N];
    completePointerExtended(tab, table);
    printf("Ilosc punktow na I cwiartce: %d\n",table[0]);
    printf("Ilosc punktow na II cwiartce: %d\n",table[1]);
    printf("Ilosc punktow na III cwiartce: %d\n",table[2]);
    printf("Ilosc punktow na IV cwiartce: %d\n",table[3]);
    printf("Ilosc punktow bedacych na osi x: %d\n",table[4]);
    printf("Ilosc punktow bedacych na osi y: %d\n",table[5]);
    printf("Ilosc punktow (0,0): %d\n",table[6]);

    return 0;
}

int osx (struct Pointer *p) {
    if(p->y>0) return 1;
    else return 0;
}

void symmetryOX (struct Pointer *p2) {
    p2->y*=-1;
}

void symmetry00 (struct Pointer *p3) {
    p3->x*=-1;
    p3->y*=-1;
}

int completePointer(struct Pointer *p4){
    int counter = 0;
    for(int i=0; i<N; i++) {
        printf("Podaj x: \n");
        scanf("%f",&p4[i].x);
        if(p4[i].x>0) counter++;
        printf("Podaj y: \n");
        scanf("%f",&p4[i].y);
    }

    return counter;
}

void completePointerExtended(struct Pointer *p5, int *tab) {
    for(int i=0; i<N; i++) {
        printf("Podaj x: \n");
        scanf("%f",&p5[i].x);
        printf("Podaj y: \n");
        scanf("%f",&p5[i].y);
        if(p5[i].x==0&&p5[i].y==0) tab[6]+=1;
        else if(p5[i].y==0) tab[5]+=1;
        else if(p5[i].x==0) tab[4]+=1;
        else if(p5[i].x>0&&p5[i].y<0) tab[3]+=1;
        else if(p5[i].x<0&&p5[i].y<0) tab[2]+=1;
        else if(p5[i].x<0&&p5[i].y>0) tab[1]+=1;
        else if(p5[i].x>0&&p5[i].y>0) tab[0]+=1;
    }

}
