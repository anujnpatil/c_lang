#include <stdio.h>

int main (){
    float area, r, h, area2;
    float pi = 3.14;
    printf("Enter the radius of circle:");
    scanf("%f", &r);
    area = pi*r*r;
    printf("The area of circle is %.3f\n", area);
    printf("Enter height for cylinder:");
    scanf("%f", &h);
    area2 = area*h;
    printf("Volume of cylinder is: %.3f\n", area2);
    return 0;
}