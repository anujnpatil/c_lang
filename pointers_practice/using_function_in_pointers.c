#include <stdio.h>

int returning(int*);

int returning(int* p){
    printf("The address of pointer is %d\n", p);
    return 5;
}

int main(){
    int a;
    printf("Enter a number:\n");
    scanf("%d",&a);
    printf("The value of pointer is %d\n", a);
    returning(&a);
    return 0;
}