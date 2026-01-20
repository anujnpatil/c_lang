#include <stdio.h>

int fibonacci(int);

int fibonacci(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    return fibonacci(n-1)+fibonacci(n-2);
}

int main(){
    int n, result;
    printf("Enter a number:\n");
    scanf("%d",&n);
    if(n<0){
        printf("Fibonacci not defined for negative numbers");
        return 0;
    }
    result=fibonacci(n);
    printf("Fibonacci for %d is %d\n",n,result);
    return 0;
}