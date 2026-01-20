#include <stdio.h>

float avg(int, int, int);

float avg(int a, int b, int c){
    float avg1;
    avg1=(a+b+c)/3.0;
    printf("The average is %.3f\n", avg1);
    return avg1;
}

int main(){
    int x,y,z;
    printf("Enter three integers for average:\n");
    scanf("%d%d%d",&x,&y,&z);
    avg(x,y,z);
    return 0;
}