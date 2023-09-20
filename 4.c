#include <stdio.h>

int main(void){
    int num[10], sum = 0;
    for (int i = 0; i < 10; i++){
        printf("Enter a number : ");
        scanf("%d", &num[i]);
        sum += num[i];
    }
    printf("The sum of all elements in the array is %d\n", sum);
}