#include <stdio.h>

int factorial(int);

int factorial(int n){
    if(n==1 || n==0){
        return 1;
    }
    int c= factorial(n-1)*n;
    return c;
}

int main(){
    int n,c;
    printf("Enter number:\n");
    scanf("%d",&n);
    if(n<0){
        printf("Factorial not applied for negative numbers\n");
        return 0;
    }
    c=factorial(n);
    printf("The factorial of %d is %d",n,c);
    return 0;
}
