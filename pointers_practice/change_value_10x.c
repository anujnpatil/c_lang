#include <stdio.h>

void ten_times(int*);

void ten_times(int* a){
    *a=*a *10;
}

int main(){
    int a;
    printf("Enter a number:\n");
    scanf("%d",&a);
    printf("The number is %d\n",a);
    ten_times(&a);
    printf("The ten times of number is %d",a);
    return 0;
}