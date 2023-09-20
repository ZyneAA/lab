#include <stdio.h>

void digit_with_space(int num);
int quo(int a, int b);
int remain(int a, int b);

int main(void){
    int x;
    printf("Enter a number : ");
    scanf("%d", &x);
    if (x < 1 || x > 32767) {
        printf("Invalid input! Enter an integer between 1 and 32767.\n");
        return 1;
    }
    digit_with_space(x);
    return 0;
}

int quo(int a, int b){
    return a / b;
}

int remain(int a, int b){
    return a % b;
}

void digit_with_space(int num) {
    int rem;
    rem = remain(num, 10);
    num = quo(num, 10);
    if(num != 0){
        digit_with_space(num);
    }
    printf("%2d", rem);
}