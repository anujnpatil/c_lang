#include <stdio.h>

int main(){
    int income;
    float tax;
    printf("Enter your income:");
    scanf("%d", &income);
    if(income<=250000){
        tax = 0;
        printf("Tax u need to  pay is %.3f", tax);
    }
    else if(income>250000 && income<=500000){
        tax = 0.05*income;
        printf("Tax u need to pay is %.3f", tax);
    }
    else if(income>500000 && income<=1000000){
        tax = 0.2*income;
        printf("Tax u need to pay is %.3f", tax);
    }
    else if (income>1000000){
        tax = income*0.3;
        printf("The tax u need to pay is %.3f", tax);
    }
    return 0;
}