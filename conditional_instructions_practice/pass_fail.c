#include <stdio.h>

int main(){
    float a, b,c, percent;
    printf("Enter marks of maths, physics, chemistry (each subject marks should be out of 100):");
    scanf("%f%f%f",&a, &b, &c);
    percent=((a+b+c)/300.0)*100;
    if (a>=33 && b>=33 && c>=33 && percent>=40){
        printf("You are passed");
    }
    else{
        printf("You are fail");
    }
    return 0;
}