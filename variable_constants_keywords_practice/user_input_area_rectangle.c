#include <stdio.h>

int main (){
    int a, b, area;
    printf("Enter length and breadth in integer:");
    scanf("%d%d", &a, &b);
    area = a*b;
    printf("The area of rectangle is: %d\n", area);
    return 0;
}