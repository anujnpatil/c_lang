#include <stdio.h>

int sum(int);

int sum(int n){
    int result;
    if(n==0){
        return 0;
    }
    result=n+sum(n-1);
    return result;
}

int main(){
    int n,result;
    printf("Enter nth natural number:\n");
    scanf("%d",&n);
    if(n<=0){
        printf("The given number is not a natural number\n");
        return 0;
    }
    result=sum(n);
    printf("The sum of first %d natural numbers is %d",n,result);
    return 0;
}