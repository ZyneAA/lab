#include <stdio.h>
#include <math.h>

int main(void){
    float deposit = 1000.00, interest = 0.05, year = 10.0;
    printf("Year    Amount of deposit\n");
    for (int i = 1; i <= 10; i++){
        printf("%d       %8f\n", i, deposit * pow(1+interest, i));
    }
}