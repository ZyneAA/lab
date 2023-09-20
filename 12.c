#include <stdio.h>

#define S 11

void Copy1(char *s1, const char *s2);
void Copy2(char *s4, const char *s3);

int main(void){
    char s1[] = "Hello mate";
    char s2[S];

    char *s3 = "Hello mate";
    char s4[S];

    Copy1(s2, s1);
    printf("The copied string is %s \n", s2);

    Copy2(s4, s3);
    printf("The copied string is %s \n", s4);
    return 0;
}

void Copy1(char *s2, const char *s1){
    int i = 0;
    while(s1[i] != '\0'){
        s2[i] = s1[i];
        i++;
    }
}

void Copy2(char *s4, const char *s3){
    while(*s3 != '\0'){
        *s4 = *s3;
        s4++;
        s3++;
    }
}