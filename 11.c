#include <stdio.h>
#include <ctype.h>

void converToLowerCase(char *str);

int main(void){
    char str[] = "There are 43 first year Student";
    printf("The original string : %s\n", str);
    converToLowerCase(str);
    printf("After converting to up case : %s\n", str);
}

void converToLowerCase(char *str){
    while (*str != '\0'){
        *str = tolower(*str);
        str++;
    } 
}