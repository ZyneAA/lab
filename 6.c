#include <stdio.h>

int main(void){
    float princ = 0.0, rate, days;
    while(1){
        printf("Enter loan principle(-1 to end): ");
        scanf("%f", &princ);
        if(princ == -1){
            break;
        }
        printf("Enter loan interest: ");
        scanf("%f", &rate);
        printf("Enter terms of the loan in days: ");
        scanf("%f", &days);
        printf("The interest charge is $%.2f\n\n", princ * rate * days/365);
    }
    return 0;
}
