#include <stdio.h>

int main(){
    int a; 
    printf("Enter a number:\n");
    scanf("%d", &a);
    printf("The address of number %d is %u",a,&a);
    return 0;
}
