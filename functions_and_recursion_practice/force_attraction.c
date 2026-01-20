#include <stdio.h>

float force(float);

float force(float m){
    float f, g=9.8;
    f=m*g;
    printf("The force of attraction on body is %.3f\n", f);
    return f;
}

int main(){
    float m;
    printf("Enter mass:\n");
    scanf("%f", &m);
    force(m);
    return 0;
}