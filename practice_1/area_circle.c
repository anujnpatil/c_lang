#include <stdio.h>

int main (){
    float area, r;
    float pi = 3.14;
    printf("Enter the radius of circle:");
    scanf("%f", &r);
    area = pi*r*r;
    printf("The area of circle is %.3f", area);
    return 0;
}