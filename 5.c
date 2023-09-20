#include <stdio.h>

int search(int x[], int  target);

int main(void){
    int arr[] = {12, 34, 89, 35};
    int f = search(arr, 34);
    printf("The index is %d\n", f);
}

int search(int x[], int  target){
    int i = 0;
    while(i < sizeof(x)/4){
        if (x[i] == target){
            return i;
        }
        i++;
    }
    return -1;
}