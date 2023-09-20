#include <stdio.h>

int main(void){
    int marks[] = {0, 0, 0, 0, 0};
    int total = 0, average = 0;
    for(int i = 0; i < 5; i++){
        printf("Enter mark: ");
        scanf("%d", &marks[i]);
        total += marks[i];
    }
    printf("The totla is %d\n", total);
    average = total / 5;
    printf("The average is %d\n", average);
    if(average > 80){
        printf("A+\n");
    }
    else if(average > 65 && average < 80){
        printf("A\n");
    }
    else if(average > 50 && average < 65){
        printf("B\n");
    }
    else if(average > 42 && average < 50){
        printf("C\n");
    }
    else{
        printf("Fail\n");
    }
    return 0;
}