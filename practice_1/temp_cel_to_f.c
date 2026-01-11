#include <stdio.h>

int main(){
    float c, f;
    printf("Enter temperature in celcius:");
    scanf("%f", &c);
    f = (c*(9/5.0))+32;
    printf("Temperature in farenheit is %.4f\n", f);
    return 0;
}