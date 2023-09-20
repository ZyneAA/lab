#include <stdio.h>

int main(void){
   for (int i = 1; i <= 8; i++)
   {
       for (int j = 1; j <= i; j++)
       {
            printf("*");
        }
    printf("\n");
    } 
    
    int x = 8;
    int temp = x;
    for(int i = 1; i <= x; i++){
        for(int j = 1; j < i; j++){
            printf(" ");
        }
        for(int k = temp; k >= 1; k--){
            printf("*");  
        }
        temp--;
        puts("");
    }
    return 0;
}