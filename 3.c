#include <stdio.h>

unsigned long long int factorial(int n);

int main(void){
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    printf("The factorial number is %llu\n", factorial(num));
}

unsigned long long int factorial(int n){
    if (n <= 1) {
        return 1;
    }
    unsigned long long int result = 1;
    for (unsigned int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}