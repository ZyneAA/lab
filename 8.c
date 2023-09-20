#include <stdio.h>
#include <stdlib.h>

int main(void){
    unsigned int count[] = {0, 0, 0, 0, 0, 0};
    for (int i = 1; i <= 6000000; i++){
        int side = 1 + rand() % 6;
        switch(side){
            case 1:
            count[0] += 1;
            break;

            case 2:
            count[1] += 1;
            break;

            case 3:
            count[2] += 1;
            break;

            case 4:
            count[3] += 1;
            break;

            case 5:
            count[4] += 1;
            break;

            case 6:
            count[5] += 1;
            break;
        }
    }
    int j = 0;
    printf("Face    Frequency\n");
    while(j<6){
        printf("%4d%13u\n", j+1, count[j]);
        j++;
    }
    return 0;
}