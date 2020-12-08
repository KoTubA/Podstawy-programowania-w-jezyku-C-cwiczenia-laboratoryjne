#include <stdio.h>
#include <stdlib.h>

void reverse(int *number, int *number2) {
    if(*number>*number2){
        int copy_number;
        copy_number = *number;
        *number = *number2;
        *number2 = copy_number;
    }
}

int main()
{
    int a = 3, b = 2;
    reverse(&a, &b);
    printf("a: %d, b: %d", a, b);

    return 0;
}
