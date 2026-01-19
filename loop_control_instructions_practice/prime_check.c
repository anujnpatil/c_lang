#include <stdio.h>

int main(){
    int n, i, count = 0;
    printf("Enter number to check whether it is prime or not:");
    scanf("%d", &n);
    for(i=1; i<=n; i=i+1){
        if(n%i==0){
            count = count + 1;
        }
    }
    if(count == 2){
        printf("The number is prime\n");
    }
    else{
        printf("The number is not prime");
    }
    return 0;
}