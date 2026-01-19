#include <stdio.h>

int main (){
    int n, i=1;
    long long fact = 1;
    printf("Enter a number:\n");
    scanf("%d", &n);
    while(i<=n){
        fact = fact*i;
        i = i + 1;
    }
    printf("The factorial of %d is %lld", n, fact);
    return 0;
}