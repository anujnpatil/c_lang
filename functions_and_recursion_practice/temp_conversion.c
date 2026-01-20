#include <stdio.h>

float ftoc(float);

float ftoc(float c){
    float f;
    f = (c*(9/5.0))+32;
    printf("The temperature in farenheit is %.3f\n", f);
    return f;
}

int main(){
    float x, y;
    printf("Enter temperature in celcius:\n");
    scanf("%f", &x);
    ftoc(x);
    return 0;
}