#include<stdio.h>
int main(void){
    
    int a[]={19, 3, 15, 7, 11, 9, 13, 5, 17, 1};

    printf("%s%7s%10s\n","ELEMENT","VALUE","       HISTOGRAM");
    for(int i = 0; i < sizeof(a)/4; i++){
        printf("%7d%7d       ",i,a[i]);
        for(int j=0;j<a[i];j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}