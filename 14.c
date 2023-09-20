#include <stdio.h>
#include <ctype.h>

#define SIZE 25

void printTextLine(char *str);

int main(void){
    char str[25];
    printf("Enter a string : ");
    fgets(str, SIZE, stdin);
    printTextLine(str);
}

void printTextLine(char *str){
    while (*str != '\0'){
        printf("%c", *str);
        str++;
    } 
}