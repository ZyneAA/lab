#include <stdio.h>
int fib(int x);

int main(void){
    int num;
    printf("Enter a number :");
    scanf("%d", &num);
    for(int i = 0; i<=num; i++){
        printf("%d\n", fib(i));
    }
}

int fib(int x){
    if(x < 2){
        return x;
    }
    return fib(x -2) + fib(x-1);
}