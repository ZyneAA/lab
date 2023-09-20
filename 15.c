#include <stdio.h>

#define S 100

void Reverse(char *ptr);

int main(void){
    char arr[S];
    fgets(arr, S, stdin);
    Reverse(arr);
    return 0;
}

void Reverse(char *ptr){
    if(*ptr == '\0'){
        return ;
    }
    Reverse(&ptr[1]);
    putchar(*ptr);
}