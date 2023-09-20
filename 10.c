#include <stdio.h>

#define SIZE 5

void modifyArray(int b[], size_t size);
void modifyElement(int e);

int main(void){
    int a[] = {5, 7, 10, 14, 19, 24};
    size_t i;

    puts("Effects of passing entire array by reference:\n\nThe values of the original array are:");
    for (i = 0; i < SIZE; ++i){
        printf("%3d", a[i]);
    }
    puts("");

    modifyArray(a, SIZE);
    puts("The values of the modified array are:");
    for (i = 0; i<SIZE; ++i){
        printf("%3d", a[i]);
    }
    printf("The effedct of passing array element by value:\n\nThe value of a[4] is %d\n", a[4]);

    modifyElement(a[4]);
    printf("The value of a[4] is %d\n", a[4]);

    return 0;
}

void modifyArray(int b[], size_t size){
    size_t j;

    for (j = 0; j<SIZE; ++j){
        b[j] *= 2;
    }
}

void modifyElement(int e){
    printf("Value in the modified element is %d\n", e*2);
}