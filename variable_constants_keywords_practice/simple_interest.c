#include <stdio.h>

int main(){
    float p, r, t, si, ta;
    printf("Enter the prnciple amount, rate of interest and time:");
    scanf("%f%f%f", &p, &r, &t);
    si = (p*r*t)/100.0;
    printf("Simple interest is %.3f\n", si);
    ta = si + p;
    printf("Total amount will be %.3f\n", ta);
    return 0;
}